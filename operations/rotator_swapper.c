/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotator_swapper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:55:17 by msukri            #+#    #+#             */
/*   Updated: 2022/04/24 17:03:19 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	double_rotate(t_stack *stack, int *rotate_a, int *rotate_b)
{
	while (*rotate_a > 0 && *rotate_b > 0)
	{
		(*rotate_a)--;
		(*rotate_b)--;
		rotate_a_b(stack);
	}
	while (*rotate_a < 0 && *rotate_b < 0)
	{
		(*rotate_a)++;
		(*rotate_b)++;
		rev_rotate_a_b(stack);
	}
}

void	rotate(t_stack *stack, int rot_a, int rot_b)
{
	double_rotate(stack, &rot_a, &rot_b);
	while (rot_a > 0)
	{
		rot_a--;
		rotate_a(stack);
	}
	while (rot_a < 0)
	{
		rot_a++;
		rev_rotate_a(stack);
	}
	while (rot_b > 0)
	{
		rot_b--;
		rotate_b(stack);
	}
	while (rot_b < 0)
	{
		rot_b++;
		rev_rotate_b(stack);
	}
}
