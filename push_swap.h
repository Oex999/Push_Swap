/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:46:45 by oexall            #+#    #+#             */
/*   Updated: 2016/06/28 09:42:47 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "stdlib.h"

typedef struct		s_stack
{
	int				len;
	int				last;
	int				*stk;
}					t_stack;

void				ft_puterror(char *str);

void				ft_swap(t_stack **stk);
void				ft_swapss(t_stack **a, t_stack **b);
void				ft_push(t_stack **to, t_stack **from);
void				ft_rotate(t_stack **stk, int last);
void				ft_rotaterr(t_stack **a, t_stack **b);
void				ft_rev_rotate(t_stack **stk, int last);
void				ft_rev_rotaterr(t_stack **a, t_stack **b);
#endif
