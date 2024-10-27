/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:56:29 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:53:03 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

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

void *ft_calloc(size_t count, size_t size){
    void *block;
    block = malloc(count * size);
    ft_memset(block, 0, count*size);
    return block;
}

int main(int argc, char const *argv[]){

    int* ap;
    
    ap = ft_calloc(3, sizeof(int));
    
    ap[2] = 1;
    ap[3] = 1;
    printf("%p\n", &ap[2]);   // アドレスを表示
    printf("%p\n", &ap[3]);
    printf("%p\n", &ap[4]);
    printf("%d\n", ap[2]);
    printf("%d\n", ap[3]);
    printf("%d\n", ap[4]);

    free(ap);    
    return 0;
}