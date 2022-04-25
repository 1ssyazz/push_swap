/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:27:42 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 14:06:01 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_list	*start_list;

	stack.a = NULL;
	stack.b = NULL;
	if (argc <= 1)
		return (0);
	args(argc, argv, &stack);
	if (!correct_order(&stack))
	{
		start_list = (stack.a);
		list_sorting(&start_list);
		indexing_list(start_list, &stack);
		if (stack.max == 5)
			solve_five(&stack);
		solve(&stack, 1);
	}
	clear_all(&stack);
	start_list = NULL;
	return (0);
}
