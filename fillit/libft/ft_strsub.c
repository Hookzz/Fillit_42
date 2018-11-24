/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 02:20:35 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/09 03:02:06 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*cpy;

	if (!s)
		return (NULL);
	if (!(cpy = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len > 0)
	{
		cpy[i] = s[start + i];
		i++;
		len--;
	}
	cpy[i] = '\0';
	return (cpy);
}
