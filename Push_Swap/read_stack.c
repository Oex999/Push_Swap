/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 08:10:44 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 08:35:08 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	read_stack_args(char **argv, int **stack, int len)
{
	int *a;
	int i;
	int tmp;

	i = 0;
	a = *stack;
	while (i < len)
	{
		if (is_valid(argv[i + 1]) == -1)
			ft_puterror("Error");
		tmp = ft_atoi(argv[i + 1]);
		if (tmp < INT_MIN || tmp > INT_MAX)
			ft_puterror("Error");
		if (is_duplicate(tmp, stack, i) == -1)
			ft_puterror("Error");
		a[i] = tmp;
		i++;
	}
}

void	read_stack_string(char *line, int **stack)
{
	char	**digits;
	int		*a;
	int		tmp;
}
