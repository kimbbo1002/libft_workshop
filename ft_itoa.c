/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:36:47 by bokim             #+#    #+#             */
/*   Updated: 2026/01/09 15:50:34 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION :
ft_itoa converts the integer n into a string

return value :
- the string representing the integer
- NULL if the allocation fails
*/

static int	ft_numlen(long n) //function to calculate the length of a number
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (n < 0)
	{
		count++;
		num = -num;
	}
	while (num / 10 != 0)
	{
		count++;
		num = num / 10;
	}
	return (count + 1);
}

static char	*ft_revstr(char *str) //function to reverse a string
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;	//index of res
	char	*res;	//result str to return
	long	num;

	num = n; //prevention of int overflow
	if (n < 0)
		num = -num;
	res = malloc(sizeof(char) * (ft_numlen(n) + 1)); //allocate the right amount of memory
	if (!res)
		return (0);
	i = 0;
	while (num / 10 != 0) //repeat until there is only one digit left
	{
		res[i++] = num % 10 + '0'; //convert last digit into char and save into res
		num = num / 10;	//divide so last digit is gone
	}
	res[i++] = num + '0'; //save last digit into res
	if (n < 0)
		res[i++] = '-'; //put sign at the end
	res[i] = '\0';
	return (ft_revstr(res)); //return the reversed version of res
}
