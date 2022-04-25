/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:05:45 by msukri            #+#    #+#             */
/*   Updated: 2022/04/15 16:04:06 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	indexing_list(t_list *start_list, t_stack *stack)
{
	int	i;

	i = 0;
	while (start_list)
	{
		start_list->index = i++;
		start_list = start_list->next_sort;
	}
	stack->max = i;
}
