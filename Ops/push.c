/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 09:55:40 by oexall            #+#    #+#             */
/*   Updated: 2016/06/27 15:51:29 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **to, t_stack **from)
{
	int	i;

	if ((*from)->last == -1)
		return ;
	i = -1;
	(*to)->last = (*to)->last + 1;
	while (++i < (*to)->last)
		(*to)->stk[i + 1] = (*to)->stk[i];
	(*to)->stk[0] = (*from)->stk[0];
	(*from)->last = (*from)->last - 1;
	i = -1;
	while (++i < (*from)->last)
		(*from)->stk[i] = (*from)->stk[i + 1];
}
