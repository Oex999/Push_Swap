/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 09:36:27 by oexall            #+#    #+#             */
/*   Updated: 2016/06/27 09:49:28 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *s, int len)
{
	int	tmp1;

	if (len < 2)
		return ;
	tmp1 = s[0];
	s[0] = s[1];
	s[1] = tmp1;
}

void	ft_swapss(t_main *stacks)
{
	ft_swap(stacks->a, stacks->len);
	ft_swap(stacks->b, stacks->len);
}
