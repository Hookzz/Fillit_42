/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 10:34:45 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/24 11:01:53 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**read_input(char *av)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];
	char	**tmp;

	if ((fd = open(av, O_RDONLY)) == -1)
		return (NULL);
	ret = 1;
	while ((ret = read(fd, buff, BUFF_SIZE)) != 0)
		buff[ret] = '\0';
	// TODO lire l'entre standart
	return (tmp);
}

char		**fill_tab(char **tab, char *buff)
{
	int i;
	int j;

	i = 0;
	j = 0;
/*
**  TODO remplir le tableau.
*/
	return (tab);
}
