/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:03:45 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:29 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION :
ft_isascii checks if c is an ascii char

return value :
- non-zero value if c is ascii
- 0 if not
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
