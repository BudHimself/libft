/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_tab_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:26:16 by fhenry            #+#    #+#             */
/*   Updated: 2016/11/18 18:38:04 by fhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	len_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char		**expand_tab_c(char **src, char *string)
{
	char	**dst;
	int		len;
	int		i;

	dst = NULL;
	i = -1;
	if (src)
	{
		len = len_tab(src);
		dst = (char **)ft_memalloc(sizeof(char *) * (len + 2));
		while (src[++i])
		{
			dst[i] = ft_strdup(src[i]);
			ft_strdel(&src[i]);
		}
		free(src);
		dst[i] = ft_strdup(string);
	}
	else
	{
		if (!(dst = (char **)ft_memalloc(sizeof(char *) * 2)))
			exit(-1);
		dst[0] = ft_strdup(string);
	}
	return (dst);
}
