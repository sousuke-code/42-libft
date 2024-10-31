/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:46:56 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 22:12:52 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;

    if (s == NULL || n == 0)
      return NULL;

    const unsigned char *p  =  (const unsigned char *)s;
    

    // sをポインタ移動したものを返す。
    // 引数で受け取ったsはvoid型なのでunsigned char型に変更する必要がある。
    // また、sについては、const修飾子がついているためconst 修飾子をはずす必要がある。
    

    while(i < n)
    {
        if(*p == (unsigned char)c)
        {
            return (void *)p;
        }
        i++;
        p++;
        
    }
    return NULL;

}


