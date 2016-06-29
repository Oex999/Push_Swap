/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 13:16:15 by oexall            #+#    #+#             */
/*   Updated: 2016/06/29 15:15:32 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_gswap(char *s_op, t_stack *stk)
{
	ft_swap(&stk);
	ft_putstr(s_op);
}

void	ft_gpush(t_stack *to, t_stack *from, char *s_op)
{
	ft_push(&to, &from);
	ft_putstr(s_op);
}

void	ft_grot(t_stack *stk, char *s_op, int last)
{
	ft_rotate(&stk, last);
	ft_putstr(s_op);
}

void	sort(t_stack *a, t_stack *b)
{
	if (is_ascending(&a) == 0)
		ft_puterror("Already In Order");
	if (a->last == 0)
		return ;
	while (is_ascending(&a) != 0)
	{
		if (a->stk[0] > a->stk[1])
		{
			ft_gswap("sa\n", a);
			ft_gpush(b, a, "pb\n");
		}
		else
			ft_gpush(b, a, "pb\n");
		if (b->stk[0] < b->stk[b->last])
			ft_grot(b, "rb", b->last);
	}
	while (b->last > -1)
	{
		ft_gpush(a, b, "pa\n");
		if (a->stk[0] > a->stk[1])
			ft_gswap("sa\n", a);
	}
}

void	sort_ascending(t_stack *a, t_stack *b)
{
	while (is_ascending(&a) != 0)
		sort(a, b);
}