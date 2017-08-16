/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:31:46 by gsebaets          #+#    #+#             */
/*   Updated: 2017/06/11 15:37:15 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	int			j;
	size_t		d;
	size_t		s;

	i = ft_strlen(dest);
	j = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size < d + 1)
		return (s + size);
	if (size > d + 1)
	{
		while (i < size - 1)
			*(dest + i++) = *(src + j++);
		*(dest + i) = '\0';
	}
	return (d + s);
}
