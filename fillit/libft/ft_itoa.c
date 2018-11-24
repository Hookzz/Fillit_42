/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 05:43:56 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/13 11:40:54 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arrsize(long num)
{
	int i;

	i = 0;
	if (num == 0)
		i++;
	if (num < 0)
		i++;
	while (num != 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*ascii;
	int		i;
	long	val;

	i = ft_arrsize(n);
	val = (long)n;
	if (!(ascii = (char *)malloc(sizeof(char) * (ft_arrsize(val) + 1))))
		return (NULL);
	ascii[i--] = '\0';
	if (val == 0)
	{
		ascii[0] = '0';
		ascii[1] = '\0';
	}
	if (val < 0)
	{
		ascii[0] = '-';
		val *= -1;
	}
	while (val != 0)
	{
		ascii[i--] = val % 10 + '0';
		val = val / 10;
	}
	return (ascii);
}
