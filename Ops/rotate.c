/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 07:20:50 by oexall            #+#    #+#             */
/*   Updated: 2016/06/28 08:22:37 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack **stk, int last)
{
	int	i;
	int	tmp;

	if ((*stk)->last <= 0)
		return ;
	tmp = (*stk)->stk[0];
	i = -1;
	while (i++ < last)
		(*stk)->stk[i] = (*stk)->stk[i + 1];
	(*stk)->stk[i - 1] = tmp;
}

void	ft_rotaterr(t_stack **a, t_stack **b)
{
	ft_rotate(a, (*a)->last - 1);
	ft_rotate(b, (*b)->last);
}
