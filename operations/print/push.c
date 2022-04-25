/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:41:50 by msukri            #+#    #+#             */
/*   Updated: 2022/04/19 22:30:58 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_a(t_stack *stack)
{
	push_top_a_on_b(&(stack->b), &(stack->a));
	ft_putstr("pa");
}

void	push_b(t_stack *stack)
{
	push_top_a_on_b(&(stack->a), &(stack->b));
	ft_putstr("pb");
}
