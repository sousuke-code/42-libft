/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:46:56 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:53:28 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;

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


int main(void)
{
    char data[] = "abcde";
    char *ret;
    
    ret = ft_memchr(data, 'c', sizeof(data));
    
    printf("%s\n", ret);
    
}