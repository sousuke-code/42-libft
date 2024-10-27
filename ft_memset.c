/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:41:23 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 20:01:42 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#define BUF_SIZE 16

void *ft_memset(void *s, int c, size_t n)
{
    // s = 初期化するメモリ領域のポインタ
    // c = セットする値
    // n = セットするバイト数｀
    
    // int c に関してはunsigned charに変換される
    // ｀nを0になるまでループさせ中で、cを

    unsigned char *p  = (unsigned char *)s;

    while(n > 0)
    {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return s;
}
