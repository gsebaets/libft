/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsebaets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:46:10 by gsebaets          #+#    #+#             */
/*   Updated: 2017/07/26 14:46:38 by gsebaets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	div;
	char	c;
	long	temp_n;

	temp_n = (long)n;
	div = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp_n *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (div <= temp_n)
		div *= 10;
	div /= 10;
	while (div != 0)
	{
		c = (temp_n / div) + 48;
		ft_putchar_fd(c, fd);
		temp_n %= div;
		div /= 10;
	}
}
