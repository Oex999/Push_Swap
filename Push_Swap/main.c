/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:43:29 by oexall            #+#    #+#             */
/*   Updated: 2016/06/27 09:47:21 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_main *stacks)
{
	int	i;

	i = 0;
	ft_printf("Stack A ::: B\n");
	while (i < stacks->len)
	{
		if (stacks->a[i])
			ft_printf("%5d\n", stacks->a[i]);
		else
			ft_printf("    ");
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

void	read_stack(char **argv, int **stack, int len)
{
	int	*a;
	int	i;

	i = 0;
	a = *stack;
	while (i < len)
	{
		if (is_valid(argv[i + 1]) == -1)
			ft_puterror("Error");
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	t_main	stacks;

	if (argc == 1)
		ft_puterror("Error");
	if (!(stacks.a = (int *)malloc(sizeof(int) * argc)))
		ft_puterror("Failed to Allocate Memory");
	if (!(stacks.b = (int *)malloc(sizeof(int) * argc)))
		ft_puterror("Failed to Allocate Memory");
	stacks.len = argc - 1;
	read_stack(argv, &stacks.a, argc - 1);
	print_stack(&stacks);

	ft_swap(stacks.a, stacks.len);
	print_stack(&stacks);

	free(stacks.a);
	free(stacks.b);
	return (0);
}
