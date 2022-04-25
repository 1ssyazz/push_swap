/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:48:27 by msukri            #+#    #+#             */
/*   Updated: 2022/04/19 23:28:57 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	correct_order(t_stack *stack)
{
	int		prev;
	t_list	*list;

	if (stack->b)
		return (0);
	if (!stack->a)
		return (1);
	list = stack->a;
	prev = list->value;
	while (list)
	{
		if (prev > list->value)
			return (0);
		prev = list->value;
		list = list->next;
	}
	return (1);
}
