/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 07:14:59 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int				checkstack(int *stack, int ncount)
{
	int			result;
	int			i;
	int			k;

	i = 0;
	k = 0;
	result = -1;
	while (result = -1)

	if (i < ncount && stack[i] > stack[i + 1])


	result = 1;
	
}

int				main(int argc, char **argv)
{
	t_stack		stack;
	int			ncount;
	char		*line;
	int			res;
	
	res = -1;
	if (argc > 1 && argv)
	{
		ncount = argc - 1;
		stack.a = malloc(sizeof(int) * ncount);
		stack.b = malloc(sizeof(int) * ncount);
		while (++res <= ncount)
			stack.a[res] = argv[res + 1];
		if (checkstack(stack.a, argv) == 3)
			ft_printf("Invalid Arguements\n");
		while (get_next_line(1, &line))
			execute(&line, &stack);
		res = checkstack(stack.a);
		res = checkstack(stack.b);
	}
	if ((checkstack(stack.a, ncount) == 1 && (checkstack(stack.b, ncount) == 2)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
