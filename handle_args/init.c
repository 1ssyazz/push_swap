/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:12:55 by msukri            #+#    #+#             */
/*   Updated: 2022/04/22 06:42:24 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init(t_list **list, int value, int index, t_stack *stack)
{
	t_list	*last;
	t_list	*init;

	last = *list;
	if (have_value(*list, value))
		exit_error(stack);
	init = malloc(sizeof(t_list));
	if (!init)
		exit_error(stack);
	init->next = NULL;
	init->next_sort = NULL;
	init->value = value;
	init->index = index;
	if (last == NULL)
	{
		*list = init;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = init;
	last->next_sort = init;
}
