/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:12:52 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 20:02:49 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    if (*little == '\0'){ //littleが空文字だったときの処理
        return (char *)big;
    }

    while(n > 0 && *big != '\0')
    {
        // size_t len = n;
        const char *p1  = big;
        const char *p2 = little;

        if(*p1 == *p2 && n > 0 && *p2 != '\0'){
            n--;
            p1++;
            p2++;
        }
        if(*p2 == '\0'){
            return (char *)big;
        }
        n--;
        big++;
    }
    return NULL;

}


