/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:35:39 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 16:18:36 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotation_in_a_b(t_stack *stack, int max_dist,
	int *rotate_a, int *rotate_b)
{
	int	dist_total;
	int	insert;
	int	distance;
	int	i;

	i = 0;
	stack->temp = stack->b;
	while (stack->temp)
	{
		insert = insert_distance(stack->a, stack->temp->index, stack->size);
		distance = distance_to_push(i++, stack->max - stack->size);
		dist_total = absolute(insert) + absolute(distance);
		if (insert > 0 && distance > 0)
			dist_total -= ft_min(distance, insert);
		if (insert < 0 && distance < 0)
			dist_total += ft_max(distance, insert);
		if (dist_total < max_dist)
		{
			max_dist = dist_total;
			*rotate_a = insert;
			*rotate_b = distance;
		}
		stack->temp = stack->temp->next;
	}
}
