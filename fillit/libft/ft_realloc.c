/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 04:16:08 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/22 06:12:47 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	size_t		i;
	void		*tmp;

	i = 0;
	if (!size)
		return (0);
	while (((unsigned char *)ptr)[i])
		i++;
	tmp = ft_memalloc(size);
	if (!tmp)
		return (NULL);
	if (i)
	{
		tmp = ft_memcpy(tmp, ptr, i);
		free(ptr);
	}
	return (tmp);
}
