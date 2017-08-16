/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:59:09 by gsebaets          #+#    #+#             */
/*   Updated: 2017/07/18 14:59:22 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t p)
{
	char	*str;

	str = dest;
	while (*str != '\0')
	{
		str++;
	}
	while (*src != '\0' && p > 0)
	{
		*str = *src;
		str++;
		src++;
		p--;
	}
	*str = '\0';
	return (dest);
}
