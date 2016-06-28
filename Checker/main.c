/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 07:45:11 by oexall            #+#    #+#             */
/*   Updated: 2016/06/28 08:18:59 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int			main(int argc, char **argv)
{
	int		*a;
	int		*b;
	int		ncount;
	char	*line;
	
	if (argc > 1 && argv)
	{
		ncount = 0;
		while (argv[ncount + 1] != '\0')
			ncount++;
		a = malloc(sizeof(int) * ncount);
		b = malloc(sizeof(int) * ncount);
		while (get_next_line(1, &line))
		{
			
		}
	}
	return (0);
}
