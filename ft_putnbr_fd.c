/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:12:48 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:15:12 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_putnbr_fd converts the int to a string then writes it to the given fd

return value :
none
*/

//same as ft_putnbr() but with all write() replaced
void	ft_putnbr_fd(int n, int fd)
{
	int	tmp;

	if (n == -2147483648) //deal with INT_MIN first
	{
		ft_putstr_fd(fd, "-2147483648"); //directly print INT_MIN
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	if (n >= 0)
	{
		tmp = n % 10 + '0';
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(fd, &tmp);
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}*/