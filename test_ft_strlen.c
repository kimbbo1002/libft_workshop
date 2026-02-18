/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:20:22 by bokim             #+#    #+#             */
/*   Updated: 2026/02/18 15:24:22 by bokim            ###   ########.fr       */
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
        return (0);
    else
        return (1);
}