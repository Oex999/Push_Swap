/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/30 08:36:53 by oexall           ###   ########.fr       */
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
	if (ft_strcmp(line, "sa") == 0)
		ft_swap(&a);
	else if (ft_strcmp(line, "sb") == 0)
		ft_swap(&b);
	else if (ft_strcmp(line, "ss") == 0)
		ft_swapss(&a, &b);
	else if (ft_strcmp(line, "pa") == 0)
		ft_push(&a, &b);
	else if (ft_strcmp(line, "pb") == 0)
		ft_push(&b, &b);
	else if (ft_strcmp(line, "ra") == 0)
		ft_rotate(&a, a->last - 1);
	else if (ft_strcmp(line, "rb") == 0)
		ft_rotate(&b, b->last);
	else if (ft_strcmp(line, "rr") == 0)
		ft_rotaterr(&a, &b);
	else if (ft_strcmp(line, "rra") == 0)
		ft_rev_rotate(&a, a->last - 1);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_rev_rotate(&b, b->last);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_rev_rotaterr(&a, &b);
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
	int			ncount;
	char		*line;
	int			k;
	int			i;
	
	i = 0;
	k = 0;
	if (argc > 1 && argv)
	{
		ncount = argc - 1;
<<<<<<< HEAD
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
=======
		while (++i <= ncount + 1)
		{
			k = 0;
			while (++k <= ncount + 1)
				if (ATOI(argv[i]) == ATOI(argv[k]) || ATOI(argv[i]) > INT_MAX)
					ft_puterror("Error");
		}
		init_stack(&a, ncount);
		init_stack(&b, ncount);
		while (++i <= ncount)
			a.stk[i] = ATOI(argv[i + 1]);
		a.last = ncount - 1;
		while (get_next_line(1, &line))
			execute(line, &a, &b);
	if ((checkstack(&a) == 1 && (checkstack(&b) == 2)))
>>>>>>> 825c9847b9ced58904169debc953362d7e716626
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	}
	else
		ft_printf("Error\n");
	return (0);
}
