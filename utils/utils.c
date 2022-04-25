/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:13:17 by msukri            #+#    #+#             */
/*   Updated: 2022/04/25 15:59:36 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

void	ft_putstr(char *s)
{
	int		i;
	char	n;

	i = 0;
	while (s[i])
		i++;
	n = '\n';
	write(1, s, i);
	write(1, &n, 1);
}

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(const char *str, t_stack *stack)
{
	long	res;
	int		ne;

	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v'
		|| *str == '\f' || *str == ' ')
		++str;
	ne = 1;
	if (*str == '-')
	{
		ne *= -1;
		++str;
	}
	if (!ft_isdigit(*str))
		exit_error(stack);
	--str;
	res = 0;
	while (++str && ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		if ((ne == 1 && res > INT_MAX) || (ne == -1 && res > absolute(INT_MIN)))
			exit_error(stack);
	}
	if (*str == '-' || *str == '+')
		exit_error(stack);
	return (res * (int)ne);
}
