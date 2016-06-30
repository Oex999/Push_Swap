/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 08:10:44 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 15:43:43 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_puterror(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}

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

void	read_stack_string(char **digits, int **stack, int len)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < len)
	{
		if (is_valid(digits[i]) == -1)
			ft_puterror("Error");
		tmp = ft_atoi(digits[i]);
		if (tmp < INT_MIN || tmp > INT_MAX)
			ft_puterror("Error");
		if (is_duplicate(tmp, stack, i))
			ft_puterror("Error");
		(*stack)[i] = tmp;
		i++;
	}
}

void	read_stack(int argc, char **args, t_stack *a, t_stack *b)
{
	char	**digits;
	int		len;

	if (argc - 1 > 1)
		len = argc;
	else
	{
		len = 0;
		digits = ft_strsplit(args[1], ' ');
		while (digits[len] != NULL)
			len++;
	}
	if (!(a->stk = (int *)malloc(sizeof(int) * len)))
		ft_puterror("Error Allocating Memory");
	if (!(b->stk = (int *)malloc(sizeof(int) * len)))
		ft_puterror("Error Allocating Memory");
	a->len = (argc - 1 > 1) ? len - 1 : len;
	a->last = (argc - 1 > 1) ? len - 1 : len;
	b->len = len - 1;
	b->last = -1;
	if (argc - 1 > 1)
		read_stack_args(args, &a->stk, len - 1);
	else
		read_stack_string(digits, &a->stk, len);
}
