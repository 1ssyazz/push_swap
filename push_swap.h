/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:02:39 by msukri            #+#    #+#             */
/*   Updated: 2022/03/29 13:02:39 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				keep;
	struct s_list	*next;
	struct s_list	*next_sort;
}					t_list;

typedef struct s_stack
{
	t_list		*a;
	t_list		*b;
	int			max;
	int			big;
	int			size;
	int			group_count;
	int			group_size;
	t_list		*temp;
}				t_stack;

int		main(int argc, char **argv);
void	args(int argc, char **argv, t_stack *stack);
void	init(t_list **list, int value, int index, t_stack *stack);
int		correct_order(t_stack *stack);
void	list_sorting(t_list **start_list);
void	indexing_list(t_list *start_list, t_stack *stack);
void	solve_five(t_stack *stack);
void	solve(t_stack *stack, int cur_group);

void	configure(t_stack *stack);
void	solve_b(t_stack *stack);

int		biggest_loop(t_list *start, int set);
int		loop_list(t_list *list, t_list *start, int set);

void	swap(t_list **stack);
void	push_top_bottom(t_list **head);
void	push_bottom_top(t_list **head);
void	push_top_a_on_b(t_list **head_a, t_list **head_b);

void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_a_b(t_stack *stack);
void	rev_rotate_a(t_stack *stack);
void	rev_rotate_b(t_stack *stack);
void	rev_rotate_a_b(t_stack *stack);
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);
void	double_rotate(t_stack *stack, int *rotate_a, int *rotate_b);
void	rotate(t_stack *stack, int rot_a, int rot_b);

int		ft_isdigit(int c);
int		ft_atoi(const char *str, t_stack *stack);
int		have_value(t_list *list, int value);
void	swap_list(t_list **prev_next, t_list *last);
int		indexed(t_list	*list, int index);
int		list_size(t_list *list);
int		distance_to_top(t_list *a, int index);
long	absolute(long a);
void	ft_putstr(char *s);
int		ft_max(int a, int b);
int		ft_min(int a, int b);

int		distance_to_push(int push, int size);
t_list	*get_last(t_list *list);
int		insert_distance(t_list *list, int m, int size);
void	rotation_in_a_b(t_stack *stack, int max_dist,
			int *rotate_a, int *rotate_b);

void	ft_puterr(char *str);
void	ft_free_list(t_list **list);
void	clear_all(t_stack *stack);
void	exit_error(t_stack *stack);

t_list	*closest_in_a(t_list *list, int cur_group, int group_size);
int		can_swap(t_list *list);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_a_b(t_stack *stack);

#endif
