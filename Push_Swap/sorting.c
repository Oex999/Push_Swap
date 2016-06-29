/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 13:16:15 by oexall            #+#    #+#             */
/*   Updated: 2016/06/29 14:28:38 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_stack *a, t_stack *b)
{
	if (is_ascending(&a) == 0)
		ft_puterror("Already In Order");
	if (a->last == 0)
		return ;
	print_stack(&a, &b); //Remove
	while (is_ascending(&a) != 0)
	{
		print_stack(&a, &b); //Remove
		if (a->stk[0] > a->stk[1])
		{
			ft_swap(&a);
			ft_push(&b, &a);
			ft_putstr("sa\npb\n");
		}
		else
		{
			ft_push(&b, &a);
			ft_putstr("pb\n");
		}
		if (b->stk[0] < b->stk[b->last])
		{
			ft_rotate(&b, b->last);
			ft_putstr("rb\n");
		}
	}
	while (b->last > -1)
	{
		ft_push(&a, &b);
		ft_putstr("pa\n");
		if (a->stk[0] > a->stk[1])
		{
			ft_swap(&a);
			ft_putstr("sa\n");
		}
		print_stack(&a, &b); //Remove
	}
}

void	sort_ascending(t_stack *a, t_stack *b)
{
	while (is_ascending(&a) != 0)
		sort(a, b);
}
