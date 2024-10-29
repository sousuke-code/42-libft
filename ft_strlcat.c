/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:04:22 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/29 00:47:20 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    
    //dstの末尾に最大dstsize - strlen(dst) -1 文字を追加する
    //オリジナルのdst文字列がdstsizeより長くなかったなら、ヌル文字で終了させる。
    size_t dst_len; 
    size_t src_len; 
    size_t max_cpy;
    size_t n;
    n = 0 ;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen((char *)src);
    if (dstsize <= dst_len)
     return (dstsize + src_len);

    max_cpy = dstsize - dst_len -1;
    while ( n < max_cpy && src[n] != '\0'){
        dst[dst_len+n] = src[n];
        n++;
    }

    dst[dst_len + n] = '\0';

    return (dst_len + src_len);

}
