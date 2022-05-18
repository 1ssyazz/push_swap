/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:51:23 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 16:59:57 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	can_swap(t_list *list)
{
	t_list	temp;
	t_list	temp2;
	int		count;
	int		count2;

	temp.next = &temp2;
	temp.index = list->next->index;
	temp2.next = list->next->next;
	temp2.index = list->index;
	count = biggest_loop(list, 0);
	count2 = biggest_loop(&temp, 0);
	if (count2 > count)
		return (1);
	return (0);
}

t_list	*closest_in_a(t_list *list, int cur_group, int group_size)
{
	t_list	*closest;
	t_list	*cur;
	int		distance;
	int		cur_distance;

	distance = INT_MAX;
	closest = NULL;
	cur = list;
	while (cur)
	{
		if (cur->index <= group_size * cur_group && !cur->keep)
		{
			cur_distance = distance_to_top(list, cur->index);
			if (absolute(cur_distance) < absolute(distance))
			{
				distance = cur_distance;
				closest = cur;
				if (distance == 0)
					break ;
			}
		}
		cur = cur->next;
	}
	return (closest);
}

void	solve_b(t_stack *stack)
{
	int	rotate_a;
	int	rotate_b;

	while (stack->b)
	{
		rotation_in_a_b(stack, INT_MAX, &rotate_a, &rotate_b);
		rotate(stack, rotate_a, rotate_b);
		push_a(stack);
		(stack->size)++;
	}
	rotate(stack, distance_to_top(stack->a, 0), 0);
}

void	configure(t_stack *stack)
{
	stack->big = biggest_loop(stack->a, 1);
	stack->size = list_size(stack->a);
	stack->group_count = ft_max(1, (int)(stack->max / 150));
	stack->group_size = stack->max / stack->group_count;
}

void	solve(t_stack *stack, int cur_group)
{
	int	distance;

	configure(stack);
	while (stack->size >= stack->big && cur_group <= (stack->group_count + 1))
	{
		stack->temp = closest_in_a(stack->a, cur_group, stack->group_size);
		if (stack->temp == NULL && ++cur_group)
			continue ;
		distance = distance_to_top(stack->a, stack->temp->index);
		if (stack->a->next && can_swap(stack->a))
		{
			swap_a(stack);
			stack->big = biggest_loop(stack->a, 1);
		}
		else if (stack->a && !stack->a->keep && distance == 0)
		{
			push_b(stack);
			(stack->size)--;
		}
		else if (stack->group_count == 1)
			rotate_a_b(stack);
		else
			rotate(stack, ft_min(1, ft_max(-1, distance)), 0);
	}
	solve_b(stack);
}
