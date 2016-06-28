/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 09:19:24 by oexall            #+#    #+#             */
/*   Updated: 2016/06/28 09:42:59 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rev_rotate(t_stack **stk, int last)
{
	int	tmp;
	int	i;

	if ((*stk)->last <= 0)
		return ;
	tmp = (*stk)->stk[last];
	i = (*stk)->last;
	while (--i >= 0)
		(*stk)->stk[i + 1] = (*stk)->stk[i];
	(*stk)->stk[0] = tmp;
}

void	ft_rev_rotaterr(t_stack **a, t_stack **b)
{
	ft_rev_rotate(a, (*a)->last - 1);
	ft_rev_rotate(b, (*b)->last);
}
