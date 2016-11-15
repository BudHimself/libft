/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:51:07 by fhenry            #+#    #+#             */
/*   Updated: 2016/09/30 22:12:27 by fhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../include/printf.h"

char			*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	size_t		i2;

	i = ft_strlen(s1);
	i2 = 0;
	while (s2[i2] != '\0' && i2 < n)
	{
		s1[i] = s2[i2];
		i++;
		i2++;
	}
	s1[i] = '\0';
	return (s1);
}