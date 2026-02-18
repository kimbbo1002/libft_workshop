/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:52:37 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:30 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION :
ft_isdigit checks if c is a digit char

return value :
- non-zero value if c is digit
- 0 if not
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
