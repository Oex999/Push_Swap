/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/27 12:22:38 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int			main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		ncount;
	
	if (argc > 1 && argv)
		ncount = 0;
		while (argv[ncount + 1] != '\0')
			ncount++;
		a.stack = malloc(sizeof(int) * ncount);
		b.stack = malloc(sizeof(int) * ncount);
	return (0);
}
