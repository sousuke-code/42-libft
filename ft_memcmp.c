/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:58:12 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 20:01:24 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"


int ft_memcmp(const void *s1,const void *s2, size_t n)
{
    
 const unsigned char *p1 = (const unsigned char *)s1;
 const unsigned char *p2 = (const unsigned char *)s2;

 // sとcの先頭nバイトを比較する
 while(n > 0)
 {
    if (*p1 != *p2){
        return (*p1 - *p2);
    }
    p1++;
    p2++;
    n--;
 }
 return 0;

}

