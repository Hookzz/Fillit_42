/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 02:30:56 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/24 10:58:34 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include "../libft/libft.h"
# define BUFF_SIZE 546

enum				e_ret
{
	ERROR = -1,
	FINISH = 0,
	SUCCESS = 1
};

typedef struct		s_ttri
{
	char			**tetrimino;
	int				x;
	int				y;
	char			c;
	struct s_ttri	*next;
}					t_ttri;

char				**read_input(char *av);
char				**fill_tab(char **tab, char *buff);
char				**create_square(char **sqr, int sqr_size);
t_ttri				*new_tetriminos(char **new_tetr, int num);
int					get_nb_tetri(char *tetri);

#endif
