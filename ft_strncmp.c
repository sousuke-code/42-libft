/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:36:05 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/23 00:47:46 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;

    while((*s1 != '\0' || *s2 !='\0') && i < n)
    {
        if (*s1 != *s2)
        {
            return (int)(*s1 - *s2);
        }
        s1++;
        s2++;
        i++;
    }

    return 0;
}