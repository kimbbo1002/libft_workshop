/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:20:22 by bokim             #+#    #+#             */
/*   Updated: 2026/02/18 15:21:57 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    *str;
    int     expected;
    int     actual;
    
    str = "test";
    expected = strlen(str);
    actual = ft_strlen(str);
    if (expected == actual)
        return (0);
    else
        return (1);
}