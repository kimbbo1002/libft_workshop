/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:31:37 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 14:17:32 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
description :
ft_toupper converts char c into upper case

return value :
- converted char
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z') //if given char is lower case
		c = c - 32; //convert into upper case
	return (c);
}