/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:51:30 by msukri            #+#    #+#             */
/*   Updated: 2022/04/24 22:35:12 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	args(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		j;
	int		args;

	i = 1;
	while (i < argc)
	{
		j = -1;
		args = 1;
		while (argv[i][++j])
		{
			if (argv[i][j] != '+' && argv[i][j] != '-' &&
				 !ft_isdigit(argv[i][j]) && argv[i][j] != ' ')
				exit_error(stack);
			if (args == 1 && argv[i][j] != ' ')
			{
				init(&(stack->a), ft_atoi(argv[i] + j, stack), -1, stack);
				args = 0;
			}
			args = argv[i][j] == ' ';
		}
		i++;
	}
}
