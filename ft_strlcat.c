/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:04:22 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 20:05:45 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    
    //dstの末尾に最大dstsize - strlen(dst) -1 文字を追加する
    //オリジナルのdst文字列がdstsizeより長くなかったなら、ヌル文字で終了させる。
    size_t dst_len; //戻り地
    size_t src_len; //strlen(dst)と同じ値
    size_t max_cpy;
    size_t n;
    n = 0 ;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen((char *)src);

    if (dstsize <= dst_len)
     return (dstsize + src_len);

    while (*dst != '\0')
    {
        dst++;
    }
    

    max_cpy = dstsize - dst_len -1;
    while ( n < max_cpy)
    {
        *dst = *src;
        src++;
        dst++;
        n++;
    }

    *dst = '\0';

    return (dst_len + src_len);

}