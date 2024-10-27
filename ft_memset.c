/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:41:23 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:53:47 by sosmiyat         ###   ########.fr       */
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

int main(void)
{
    // 変数定義
    char buf1[BUF_SIZE];
    char buf2[BUF_SIZE];

    // 変数初期化
    ft_memset(buf1, '\0', BUF_SIZE);
    ft_memset(buf2, '\0', BUF_SIZE);

    // 配列の内容を表示
    printf("初期化後の配列の要素を表示。\n");
    printf("buf1:%s\n", buf1);
    printf("buf2:%s\n", buf2);

    // メモリ領域を特定の文字で埋める
    ft_memset(buf1, 'a', 4);  // buf1の最初の4バイトをaにする
    ft_memset(buf1, 'b', 2);  // buf1の最初の2バイトをbにする
    ft_memset(buf2, 'c', 3);  // buf2の最初の3バイトをcにする

    // 配列の内容を表示
    printf("配列の要素を表示。\n");
    printf("buf1:%s\n", buf1);
    printf("buf2:%s\n", buf2);
	return 0;
}