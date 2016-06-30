/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 11:39:40 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 11:42:50 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		is_valid(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str))
			return (-1);
		str++;
	}
	return (0);
}

int		is_duplicate(int num, int **stack, int len)
{
	int	i;
	int	*stk;

	i = 0;
	stk = *stack;
	while (i < len)
	{
		if (stk[i] == num)
			return (-1);
		i++;
	}
	return (0);
}
