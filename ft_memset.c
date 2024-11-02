/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:41:23 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/02 15:16:48 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    // s = 初期化するメモリ領域のポインタ
    // c = セットする値
    // n = セットするバイト数｀
    
    // int c に関してはunsigned charに変換される
    // ｀nを0になるまでループさせ中で、cを
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

