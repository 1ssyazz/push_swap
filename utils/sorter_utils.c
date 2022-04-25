/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:49:06 by msukri            #+#    #+#             */
/*   Updated: 2022/04/19 23:09:16 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_last(t_list *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
	{
		list = list->next;
	}
	return (list);
}

int	distance_to_push(int push, int size)
{
	if (size == 1)
		return (0);
	if (push >= size / 2)
		push -= size;
	return (push);
}

int	insert_distance(t_list *list, int m, int size)
{
	t_list	*b;
	t_list	*t;
	int		in_max[2];
	int		i;

	i = 0;
	b = get_last(list);
	t = list;
	in_max[1] = INT_MAX;
	while (t)
	{
		if ((b->index > t->index && (m < t->index || m > b->index))
			|| (m > b->index && m < t->index))
		{
			in_max[0] = i;
			if (in_max[0] > size / 2)
				in_max[0] -= size;
			if (absolute(in_max[0]) < in_max[1])
				in_max[1] = in_max[0];
		}
		b = t;
		t = t->next;
		i++;
	}
	return (in_max[1]);
}
