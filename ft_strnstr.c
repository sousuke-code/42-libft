/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:12:52 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/02 15:33:03 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t little_len;
    if (*little == '\0'){ //littleが空文字だったときの処理
        return (char *)big;
    }
    
    little_len = ft_strlen((char *)little);
    
    while(n >=  little_len && *big != '\0')
    {
        // size_t len = n;
        const char *big_cpy  = big;
        const char *little_cpy = little;

        while(*big_cpy == *little_cpy && *little_cpy != '\0'){
            big_cpy++;
            little_cpy++;
        }
        if(*little_cpy == '\0'){
            return (char *)big;
        }
        n--;
        big++;
    }
    return NULL;

}
