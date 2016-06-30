/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 13:18:23 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 15:35:02 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		is_ascending(t_stack **stk)
{
	int	previous;
	int	d;

	d = 0;
	previous = (*stk)->stk[0];
	while (d < (*stk)->last)
	{
		if ((*stk)->stk[d] < previous)
			return (-1);
		previous = (*stk)->stk[d];
		d++;
	}
	return (0);
}
