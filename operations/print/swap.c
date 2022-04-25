/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:03:26 by msukri            #+#    #+#             */
/*   Updated: 2022/04/24 17:06:40 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_a(t_stack *stack)
{
	swap(&(stack->a));
	ft_putstr("sa");
}

void	swap_b(t_stack *stack)
{
	swap(&(stack->b));
	ft_putstr("sb");
}

void	swap_a_b(t_stack *stack)
{
	swap(&(stack->a));
	swap(&(stack->b));
	ft_putstr("ss");
}
