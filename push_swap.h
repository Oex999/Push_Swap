/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:46:45 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 08:29:12 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "stdlib.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct		s_stack
{
	int				len;
	int				last;
	int				*stk;
}					t_stack;

void				read_stack_args(char **argv, int **stack, int len);
void				read_stack_string(char *line, int **stack);

void				ft_puterror(char *str);
void				print_stack(t_stack **a, t_stack **b);
int					is_valid(char *str);
int					is_duplicate(int num, int **stack, int len);

void				ft_swap(t_stack **stk);
void				ft_swapss(t_stack **a, t_stack **b);
void				ft_push(t_stack **to, t_stack **from);
void				ft_rotate(t_stack **stk, int last);
void				ft_rotaterr(t_stack **a, t_stack **b);
void				ft_rev_rotate(t_stack **stk, int last);
void				ft_rev_rotaterr(t_stack **a, t_stack **b);

int					is_ascending(t_stack **stk);
void				sort(t_stack *a, t_stack *b);
void				sort_ascending(t_stack *a, t_stack *b);

#endif
