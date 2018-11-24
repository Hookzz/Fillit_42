/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 09:15:46 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/24 10:48:56 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			get_nb_tetri(char *tetri)
{
	int     nb_tetri;

	nb_tetri = 0;
	while (*tetri)
	{
		if ((*tetri == '\n' && *(tetri + 1) == '\n') || *(tetri + 1) == '\0')
			nb_tetri++;
		tetri++;
	}
	return (nb_tetri);
}

t_ttri		*new_tetri(char **tetri, int nb)
{
	t_ttri *newt;

	newt = NULL;
	if (!(newt = (t_ttri*)malloc(sizeof(t_ttri))) && !newt)
		return (NULL);
	newt->tetrimino = tetri;
	newt->x = 0;
	newt->y = 0;
	newt->c = 'A' + nb;
	newt->next = NULL;
	return (newt);
}

char		**create_sqr(char **sqr, int sqr_size)
{
	char	**newsqr;
	int		i;
	int		j;

	if (!(newsqr = ft_memalloc(sizeof(char*) * sqr_size + 1)))
		return (NULL);
	while (*newsqr)
		*newsqr++ = ft_memalloc(sizeof(char) * sqr_size + 1);
	i = 0;
	j = 0;
	while (i < sqr_size)
	{
		while (j < sqr_size)
			newsqr[i][j++] = '.';
		newsqr[i][j] = '\0';
		j = 0;
		i++;
	}
	newsqr[i] = 0;
	return (newsqr);
}
