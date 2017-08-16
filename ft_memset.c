/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 18:13:01 by gsebaets          #+#    #+#             */
/*   Updated: 2017/07/29 12:29:11 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *mem, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)mem)[i] = (unsigned char)c;
		i++;
	}
	return (mem);
}
