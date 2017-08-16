/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:07:10 by gsebaets          #+#    #+#             */
/*   Updated: 2017/06/11 15:15:03 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	length;

	if (*little == '\0')
		return ((char *)big);
	length = ft_strlen(little);
	while (*big != '\0' && len >= length)
	{
		if (ft_strncmp(big, little, length) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
