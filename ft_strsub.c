/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:26:10 by gsebaets          #+#    #+#             */
/*   Updated: 2017/07/17 15:26:37 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	index = 0;
	if (!s1 || !(sub = ft_strnew(len)))
		return (NULL);
	while (index < len)
		sub[index++] = s1[start++];
	return (sub);
}
