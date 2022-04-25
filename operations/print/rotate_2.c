/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:07:33 by msukri            #+#    #+#             */
/*   Updated: 2022/04/19 22:10:27 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rev_rotate_a_b(t_stack *stack)
{
	push_bottom_top(&(stack->a));
	push_bottom_top(&(stack->b));
	ft_putstr("rrr");
}
