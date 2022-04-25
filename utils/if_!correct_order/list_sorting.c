/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:28:35 by msukri            #+#    #+#             */
/*   Updated: 2022/04/22 14:15:15 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	list_sorting(t_list **start_list)
{
	t_list	*last;
	t_list	*prev;	

	prev = NULL;
	last = *start_list;
	while (last && last->next_sort)
	{
		if (last->value > last->next_sort->value)
		{
			if (prev == NULL)
				swap_list(start_list, last);
			else
				swap_list(&(prev->next_sort), last);
			last = *start_list;
			prev = NULL;
		}
		else
		{
			prev = last;
			last = last->next_sort;
		}
	}
}
