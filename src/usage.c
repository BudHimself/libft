/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:49:14 by fhenry            #+#    #+#             */
/*   Updated: 2018/09/08 19:55:19 by fhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void			usage() {
	int			fd;
	char*		line;


	if ((fd = open(".usage", O_RDONLY)) == -1)
		ft_putendl("put '.usage' in the project folder to know usage");
	else
		while (get_next_line(fd, &line) > 0)
			ft_putendl(line);
}