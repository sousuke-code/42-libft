/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:01:01 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/30 12:14:31 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


char *ft_strjoin(char const *s1 , char const *s2)
{

    //s1とs2を連結させた新しい文字列を返す
    // また、割当に失敗した場合にはNULLを返す
    //s1末尾のNULLを消し、その後ろにs2を連結させていく必要がある。
    // 戻り地はs1
    //mallocで新しい文字列を作成したものをstrcatで返す。

    //NULL時の扱い
    //NULL , s2ならばs2だけコピーする　
    //s1, NULLならs1コピーz
    //NUL, NULLならから文字

    size_t len;
    char *str;
    
    len  = ft_strlen((char *)s1) + ft_strlen((char *)s2) +1;
    str = malloc(len);
    if (str == NULL)
      return NULL;
    
    ft_strlcpy(str , (char *)s1, len);
    ft_strlcat(str, (char *)s2, len);
    return str;
}

