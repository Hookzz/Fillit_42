/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:29:45 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/09 04:28:24 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t slen;

	if (*to_find == '\0')
		return ((char*)str);
	slen = ft_strlen(to_find);
	while (*str && n >= slen)
	{
		if (!ft_strncmp(str, to_find, slen))
			return ((char*)str);
		str++;
		n--;
	}
	return (NULL);
}
