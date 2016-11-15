/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:26:21 by fhenry            #+#    #+#             */
/*   Updated: 2016/01/14 19:08:37 by fhenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/printf.h"

void		ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		f(s);
		s++;
	}
}
