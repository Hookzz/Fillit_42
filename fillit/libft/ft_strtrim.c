/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 07:29:56 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/09 08:24:19 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	while (s[i] == 9 || s[i] == 10 || s[i] == 32)
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	j = i;
	while (s[j] != '\0')
		j++;
	j--;
	while (s[j] == 9 || s[j] == 10 || s[j] == 32)
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
