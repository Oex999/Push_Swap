/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 14:24:38 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int				checkstack(t_stack *stack)
{
	int			result;

	if ((result = is_ascending(&stack)) == -1)
		return (-1);
	else if ((result = is_ascending(&stack)) == 0)
		return (0);
	else if (stack->last == -1)
		return (2);	
	return (5);
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
		ft_push(&b, &b);
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
	else
		ft_puterror("Error");
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
	//int			ncount;
	char		*line;
	//int			k;
	//int			i;
	
	//i = 0;
	if (argc > 1 && argv)
	{
/*		ncount = argc - 1;
		ft_printf("OK7\n");
		while (++i <= ncount + 1)
		{
			ft_printf("argv[i %i] = %s\n", i, argv[i]);
			k = i;
			while (++k <= ncount)
			{
				ft_printf("argv[k %i] = %s\n", k, argv[k]);
				if (ATOI(argv[i]) == ATOI(argv[k]) || ATOI(argv[i]) > INT_MAX)
					ft_puterror("Error");
			}
		}*/
		ft_printf("OK1\n");
		//init_stack(&a, ncount);
		ft_printf("OK2\n");
		//init_stack(&b, ncount);
		ft_printf("OK3\n");
		read_stack(argc, argv, &a, &b);
		/*while (++i <= ncount)
			a.stk[i] = ATOI(argv[i + 1]);*/
		ft_printf("OK4\n");
		//a.last = ncount - 1;
		ft_printf("OK5\n");
		while (0 != get_next_line(1, &line))
			execute(line, &a, &b);
		ft_printf("OK6\n");
	if ((checkstack(&a) == 1 && (checkstack(&b) == 2)))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	}
	else
	{
		free(a.stk);
		free(b.stk);
		ft_printf("Error\n");
	}
	return (0);
}
