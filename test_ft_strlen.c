/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:20:22 by bokim             #+#    #+#             */
/*   Updated: 2026/02/18 15:23:25 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[5] = "test";
    int expected = strlen(str);
    int actual = ft_strlen(str);
    if (expected == actual)
        return (0);
    else
        return (1);
}