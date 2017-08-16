/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 23:34:00 by gsebaets          #+#    #+#             */
/*   Updated: 2017/06/10 23:37:08 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *sr, int c)
{
	char	*str;

	str = (char *)sr + ft_strlen(sr);
	while (*str != c)
	{
		if (str == sr)
		{
			return (0);
		}
		str--;
	}
	return (str);
}
