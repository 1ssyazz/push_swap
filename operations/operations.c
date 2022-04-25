/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:53:39 by msukri            #+#    #+#             */
/*   Updated: 2022/04/07 14:48:49 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	t_list	*temp;
	t_list	*sec_next;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	sec_next = (*stack)->next->next;
	*stack = (*stack)->next;
	(*stack)->next = temp;
	temp->next = sec_next;
}

void	push_top_bottom(t_list **head)
{
	t_list	*top;
	t_list	*temp;

	if (!*head || !(*head)->next)
		return ;
	top = *head;
	*head = (*head)->next;
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = top;
	top->next = NULL;
}

void	push_bottom_top(t_list **head)
{
	t_list	*tail;
	t_list	*new_tail;

	if (!head || !(*head)->next)
		return ;
	tail = *head;
	while (tail->next)
	{
		new_tail = tail;
		tail = tail->next;
	}
	tail->next = *head;
	*head = tail;
	new_tail->next = NULL;
}

void	push_top_a_on_b(t_list **head_a, t_list **head_b)
{
	t_list	*head;

	if (!*head_a)
		return ;
	head = *head_a;
	*head_a = head->next;
	if (*head_b)
		head->next = *head_b;
	else
		head->next = NULL;
	*head_b = head;
}
