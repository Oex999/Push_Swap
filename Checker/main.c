/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/07/01 08:18:46 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int				checkstack(t_stack *stack)
{
	if ((is_ascending(&stack)) == -1)
		return (-1);
	return (0);
}

void			execute(char *line, t_stack *a, t_stack *b)
{
	if (ft_strncmp(line, "sa", 2) == 0)
		ft_swap(&a);
	else if (ft_strncmp(line, "sb", 2) == 0)
		ft_swap(&b);
	else if (ft_strncmp(line, "ss", 2) == 0)
		ft_swapss(&a, &b);
	else if (ft_strncmp(line, "pa", 2) == 0)
		ft_push(&a, &b);
	else if (ft_strncmp(line, "pb", 2) == 0)
		ft_push(&b, &a);
	else if (ft_strncmp(line, "ra", 2) == 0)
		ft_rotate(&a, a->last - 1);
	else if (ft_strncmp(line, "rb", 2) == 0)
		ft_rotate(&b, b->last);
	else if (ft_strncmp(line, "rr", 2) == 0)
		ft_rotaterr(&a, &b);
	else if (ft_strncmp(line, "rra", 3) == 0)
		ft_rev_rotate(&a, a->last - 1);
	else if (ft_strncmp(line, "rrb", 3) == 0)
		ft_rev_rotate(&b, b->last);
	else if (ft_strncmp(line, "rrr", 3) == 0)
		ft_rev_rotaterr(&a, &b);
	if (a->print == 1)
		print_stack(&a, &b);
}

void			init_stack(t_stack *stack, int ncount)
{
	stack->stk = malloc(sizeof(int) * ncount);
	stack->len = ncount;
	stack->last = -1;
}

int				main(int argc, char **argv)
{
	t_stack		a;
	t_stack		b;
	char		*line;

	if (argc > 1 && argv)
	{
		a.print = 0;
		if (ft_strcmp(argv[1], "-v") == 0)
		{
			argv++;
			argc--;
			a.print = 1;
		}
		read_stack(argc, argv, &a, &b);
		while (0 != get_next_line(0, &line))
			execute(line, &a, &b);
		if ((checkstack(&a) == 0 && (b.last == -1)))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		free(a.stk);
		free(b.stk);
	}
	return (0);
}
