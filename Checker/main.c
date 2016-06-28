/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/28 09:45:00 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int				main(int argc, char **argv)
{
	t_stacks	stacks;
	int			ncount;
	char		*line;
	int			k;

	if (argc > 1 && argv)
	{
		ncount = argc - 1;
		k = 1;
		stacks.a = malloc(sizeof(int) * ncount);
		stacks.b = malloc(sizeof(int) * ncount);
		while (k <= ncount)
			stacks.a[k - 1] = argv[k];
		while (get_next_line(1, &line))
		{
			exec_op(&line, stacks);	
		}
	}
	return (0);
}
