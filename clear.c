/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:17:05 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 14:19:44 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_puterr(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
		i++;
	n = '\n';
	write(2, str, i);
	write(2, &n, 1);
}

void	ft_free_list(t_list **list)
{
	t_list	*l;
	t_list	*next;

	l = *list;
	while (l)
	{
		next = l->next;
		free(l);
		l = next;
	}
	*list = NULL;
}

void	clear_all(t_stack *stack)
{
	ft_free_list(&(stack->a));
	ft_free_list(&(stack->b));
}

void	exit_error(t_stack *stack)
{
	ft_puterr("Error");
	clear_all(stack);
	exit(EXIT_FAILURE);
}
