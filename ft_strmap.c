/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:10:49 by gsebaets          #+#    #+#             */
/*   Updated: 2017/07/16 15:15:18 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		index;

	if (!s)
		return (NULL);
	ret = ft_strnew(ft_strlen(s));
	if (ret == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		ret[index] = f(s[index]);
		index++;
	}
	return (ret);
}
