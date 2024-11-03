/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:31:15 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/03 00:22:47 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *dist, const void *src, size_t n)
{
    unsigned char *p = (unsigned char *)dist;
    const unsigned char *pp = (const unsigned char *)src;

    if (dist == NULL || src == NULL){
        return NULL;
    }

    while (n > 0)
    {
        *p = *pp;
        p++;
        pp++;
        n--;
    }
    return dist;
}