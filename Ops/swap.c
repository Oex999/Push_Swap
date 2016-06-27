/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 09:36:27 by oexall            #+#    #+#             */
/*   Updated: 2016/06/27 11:40:25 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **stk)
{
	int	tmp;

	if ((*stk)->last == -1 || (*stk)->len == 1 || (*stk)->last == 1)
		return ;
	tmp = (*stk)->stk[0];
	(*stk)->stk[0] = (*stk)->stk[1];
	(*stk)->stk[1] = tmp;
}

void	ft_swapss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
}
