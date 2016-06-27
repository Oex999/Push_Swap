/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:46:45 by oexall            #+#    #+#             */
/*   Updated: 2016/06/27 09:42:01 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "stdlib.h"

typedef struct		s_main
{
	int				len;
	int				*a;
	int				*b;
}					t_main;

void				ft_puterror(char *str);

void				ft_swap(int *s, int len);

#endif
