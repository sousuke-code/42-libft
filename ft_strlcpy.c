
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:03:47 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/25 13:43:55 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    // src からdistに対して、size - 1バイトを複写する。
    size_t n;
    n = 0;
    while (src[n])
    { 
      n++;  
    }
    if (size == 0) {
      return n;
    }
    size_t i = 0; //戻り地で返すsrcの長さ
    while (i  < size -1 && *src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
        i++;
    }

    *dst = '\0'; 
    return n;
}


