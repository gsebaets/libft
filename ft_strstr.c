/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 14:29:28 by gsebaets          #+#    #+#             */
/*   Updated: 2017/07/16 14:16:46 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	len;

	if (*little != '\0')
	{
		len = ft_strlen(little);
		while (ft_strncmp(big, little, len) != 0)
		{
			if (*big == '\0')
				return (NULL);
			big++;
		}
	}
	return ((char *)big);
}
