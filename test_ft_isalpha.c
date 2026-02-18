/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:35:21 by bokim             #+#    #+#             */
/*   Updated: 2026/02/18 15:37:12 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int main()
{
    char c = 'a';
    int expected = ft_isalpha(c);
    int actual = isalpha(c);
    if (expected == actual)
    {
        printf("ft_isalpha: [OK]");
        return (0);
    }
    else
    {
        printf("ft_isalpha: [KO]");
        return (1);
    }
}