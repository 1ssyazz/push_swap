/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   have_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:19:10 by msukri            #+#    #+#             */
/*   Updated: 2022/04/07 15:33:33 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	have_value(t_list *list, int value)
{
	while (list)
	{
		if (list->value == value)
			return (1);
		list = list->next;
	}
	return (0);
}
