/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:08:00 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:32 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION :
ft_isprint checks if c is a printable char

return value :
- non-zero value if c is printable
- 0 if not
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
