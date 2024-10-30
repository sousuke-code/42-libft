/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:00:37 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/30 10:01:36 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    //start= 開始のインデックス
    //len = startのインデックから何も自分を出力するか

    char *ans;
    ans = malloc(len+1);
    if (ans == NULL) {
        return NULL;
    }
    
    unsigned int s_len;
    unsigned int index;
    unsigned int  i;
    i = 0;
    index = 0;
    s_len = ft_strlen((char *)s);


    if (len <= 0){
        return NULL;
    }

    if (start >= s_len) {
        return ft_strdup("");
    }

    while (*s != '\0' && index <= start + len -1)
    {
        if (index >= start)
        {
            ans[i] = *s; //ansに対してsのindex文字を代入していく
            i++;
        }
        index++;
        s++;
    }
    ans[i] = '\0';
    

    return ans;

}


