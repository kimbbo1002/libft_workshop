/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:04:57 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:12:37 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
description :
ft_putchar_fd writes the given character to the given fd

return value :
none
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	//instead of using write(1, ~) we now pass the given fd into write()
}
