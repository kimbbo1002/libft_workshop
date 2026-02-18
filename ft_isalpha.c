/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:45:04 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:27 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION :
ft_isalpha checks if c is ab alphabetic char

return value :
- non-zero value if c is alphabetic
- 0 if not
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
