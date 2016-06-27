/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 11:08:39 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/14 15:20:56 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int			count_words(char *s, char c)
{
	int		words;

	while (*s && *s == c)
		s++;
	if (*s)
		words = 1;
	else
		words = 0;
	while (*s)
	{
		if (*s == c && s[1] && s[1] != c)
			words++;
		s++;
	}
	return (words);
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	char	*start;
	char	**result;

	words = count_words((char *)s, c);
	if (!s || !c)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	start = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (start != s)
				*(result++) = ft_strsub(start, 0, s - start);
			start = (char *)s + 1;
		}
		s++;
	}
	if (start != s)
		*(result++) = ft_strsub(start, 0, s - start);
	*result = NULL;
	return (result - words);
}
