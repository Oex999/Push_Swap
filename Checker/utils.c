/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 11:39:40 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 15:41:14 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	ft_printf(":::Printing:::\nA\tB\n----------\n");
	while (i < (*a)->len)
	{
		if (i < (*a)->last)
			ft_printf("%d\t", (*a)->stk[i]);
		else
			ft_printf("\t");
		if (i <= (*b)->last)
			ft_printf("%d", (*b)->stk[i]);
		else
			ft_printf("");
		ft_printf("\n");
		i++;
	}
}

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
