/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:58:40 by msukri            #+#    #+#             */
/*   Updated: 2022/04/13 14:08:13 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_list(t_list **prev_next, t_list *last)
{
	t_list	*swap;

	swap = *prev_next;
	*prev_next = last->next_sort;
	swap->next_sort = last->next_sort->next_sort;
	(*prev_next)->next_sort = swap;
}
