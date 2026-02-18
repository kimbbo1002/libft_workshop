/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:58:34 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:18:00 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
description :
ft_tolower converts char c into lower case

return value :
- converted char
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z') //if given char is upper case
		c = c + 32;	//convert to lower case
	return (c);
}
