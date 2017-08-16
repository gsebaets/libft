/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 09:36:52 by gsebaets          #+#    #+#             */
/*   Updated: 2017/06/11 09:48:05 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if (d <= s || s >= (d + n))
	{
		while (n)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n)
		{
			*d-- = *s--;
			n--;
		}
	}
	return (dest);
}
