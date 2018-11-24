/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:09:12 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/08 16:08:55 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *t;

	if ((t = (unsigned char*)malloc(sizeof(unsigned char) * size)))
	{
		ft_bzero(t, size);
		return (t);
	}
	else
		return (NULL);
}
