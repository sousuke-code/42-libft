/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:41:23 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/02 22:25:58 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    if (s == NULL || n == 0)
      return NULL;

    unsigned char *p  = (unsigned char *)s;

    while(n > 0)
    {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return s;
}

