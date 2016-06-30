/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/29 15:57:24 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int				checkstack(int *stack, int ncount)
{
	int			result;
	int			i;
	int			k;

	i = 0;
	k = 0;
	result = -1;
	while (result = -1)

	result = 1;
	
}

void			execute(char *line, t_stack a, t_stack b)
{
	if (ft_strcmp(line, "sa")
		if (line[1] == "sb")
		else if (line[1] == "ss")
		else if (line[1] == "pa")
	else if (line[0] == "pb")
		if (line[1] == "pp")
		else if (line[1] == 'b')
	else if (line[0] == 'r')
		if (line[1] == 'a')
		else if (line[1] == 'b')
		else if (line[1] == 'r')
			if (line[2] == '\0')
			else if (line[2] == 'a')
			else if (line[2] == 'b')
			else if (line[2] == 'r')

}

int				main(int argc, char **argv)
{
	t_stack		a;
	t_stack		b;
	int			ncount;
	char		*line;
	int			i;
	int			k;
	
	i = 0;
	k = 0;
	if (argc > 1 && argv)
	{
		//checks args
		ncount = argc - 1;
		while (++i <= ncount + 1)
			while (++k <= ncount + k + 1)
				if (argv[i] == argv[k] || argv[i] > INT_MAX)
					ft_puterror("Error");

		a.stk = malloc(sizeof(int) * ncount);
		a.len = ncount;
		a.last = ncount;
		b.stk = malloc(sizeof(int) * ncount);
		b.len = ncount;
		b.last = -1;
		while (++res <= ncount)
			stack.a[res] = argv[res + 1];
		while (get_next_line(1, &line));
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
