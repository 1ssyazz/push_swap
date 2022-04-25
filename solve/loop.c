/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:13:03 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 16:18:18 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	loop_list(t_list *list, t_list *start, int set)
{
	t_list	*loop;
	int		index_loop;
	int		i;

	index_loop = -1;
	i = 0;
	loop = start;
	while (loop)
	{
		if (set)
			loop->keep = 0;
		if (loop->index > index_loop)
		{
			index_loop = loop->index;
			i++;
			if (set)
				loop->keep = 1;
		}
		loop = loop->next;
		if (loop == NULL)
			loop = list;
		if (loop == start)
			break ;
	}
	return (i);
}

int	biggest_loop(t_list *start, int set)
{
	t_list	*list;
	int		biggest;
	int		count;
	t_list	*big_keep;

	biggest = 0;
	list = start;
	while (list)
	{
		count = loop_list(start, list, 0);
		if (count > biggest)
		{
			biggest = count;
			big_keep = list;
		}
		list = list->next;
	}
	if (set)
		loop_list(start, big_keep, 1);
	return (biggest);
}
