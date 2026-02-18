/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:20:22 by bokim             #+#    #+#             */
/*   Updated: 2026/02/18 15:34:55 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[5] = "test";
    size_t expected = strlen(str);
    size_t actual = ft_strlen(str);
    if (expected == actual)
    {
        printf("ft_strlen: [OK]");
        return (0);
    }
    else
    {
        printf("ft_strlen: [KO]");
        return (1);
    }
}