/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:43:29 by oexall            #+#    #+#             */
/*   Updated: 2016/06/29 14:29:11 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	ft_printf(":::Printing:::\nA\tB\n----------\n");
	while (i < (*a)->len)
	{
		if (i < (*a)->last)
			ft_printf("%d\t", (*a)->stk[i]);
		else
			ft_printf("\t");
		if (i <= (*b)->last)
			ft_printf("%d", (*b)->stk[i]);
		else
			ft_printf("");
		ft_printf("\n");
		i++;
	}
}

int		is_valid(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str))
			return (-1);
		str++;
	}
	return (0);
}

int		is_duplicate(int num, int **stack, int len)
{
	int	i;
	int	*stk;

	i = 0;
	stk = *stack;
	while (i < len)
	{
		if (stk[i] == num)
			return (-1);
		i++;
	}
	return (0);
}

void	read_stack(char **argv, int **stack, int len)
{
	int	*a;
	int	i;
	int	tmp;

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

int		main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		ft_puterror("Error");
	if (!(a.stk = (int *)malloc(sizeof(int) * argc)))
		ft_puterror("Failed to Allocate Memory");
	if (!(b.stk = (int *)malloc(sizeof(int) * argc)))
		ft_puterror("Failed to Allocate Memory");
	a.len = argc - 1;
	a.last = argc - 1;
	b.len = argc - 1;
	b.last = -1;
	read_stack(argv, &a.stk, argc - 1);
	sort_ascending(&a, &b);
	free(a.stk);
	free(b.stk);
	return (0);
}
