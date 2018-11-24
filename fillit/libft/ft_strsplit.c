/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:28:24 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/19 20:00:25 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		start;
	int		end;
	int		words;
	size_t	i;
	char	**tab;

	i = 0;
	words = 0;
	tab = NULL;
	if (!s || !(tab = (char**)malloc(sizeof(char*) * ft_count_words(s, c) + 1)))
		return (NULL);
	while (i < ft_strlen(s))
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		if ((end - start) > 0)
			tab[words++] = ft_strsub(s, start, end - start);
	}
	tab[words] = 0;
	return (tab);
}
