/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:58:45 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 16:18:25 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	distance_to_top(t_list *a, int index)
{
	int	i;
	int	size;

	i = 0;
	size = list_size(a);
	while (a)
	{
		if (a->index == index)
			break ;
		a = a->next;
		i++;
	}
	if (i > size / 2)
		i -= size;
	return (i);
}

int	indexed(t_list *list, int index)
{
	while (list)
	{
		if (list->index == index)
			return (1);
		list = list->next;
	}
	return (0);
}

void	solve_five(t_stack *stack)
{
	t_list	*list;
	int		min;
	int		curr;

	while (indexed(stack->a, 0) || indexed(stack->a, stack->max - 1))
	{
		list = stack->a;
		min = 4;
		while (list)
		{
			if (list->index == 0 || list->index == stack->max - 1)
			{
				curr = distance_to_top(stack->a, list->index);
				if (absolute(curr) < absolute(min))
					min = curr;
			}
			list = list->next;
		}
		if (min == 0)
			push_b(stack);
		if (min > 0)
			rotate_a(stack);
		if (min < 0)
			rev_rotate_a(stack);
	}
}
