/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:15:59 by msukri            #+#    #+#             */
/*   Updated: 2022/04/19 22:23:06 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate_a(t_stack *stack)
{
	push_top_bottom(&(stack->a));
	ft_putstr("ra");
}

void	rotate_b(t_stack *stack)
{
	push_top_bottom(&(stack->b));
	ft_putstr("rb");
}

void	rotate_a_b(t_stack *stack)
{
	push_top_bottom(&(stack->a));
	push_top_bottom(&(stack->b));
	ft_putstr("rr");
}

void	rev_rotate_a(t_stack *stack)
{
	push_bottom_top(&(stack->a));
	ft_putstr("rra");
}

void	rev_rotate_b(t_stack *stack)
{
	push_bottom_top(&(stack->b));
	ft_putstr("rrb");
}
