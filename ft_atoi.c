/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:24:44 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:13 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION :
ft_atoi converts a string into an int

return value :
the converted int
*/

int	ft_atoi(const char *str)
{
	int	i;	//index of str
	int	count;	//sign to differentiate negative/positive
	int	res;	//final value to return 

	i = 0;
	count = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f') //skipping whitespace
		i++;
	if (str[i] == '+' || str[i] == '-')	//checking sign
	{
		if (str[i] == '-')
			count = -1;	//make count -1 if it is a negative number
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0'); //change char->int and save in result
		i++;
	}
	return (count * res);
}
