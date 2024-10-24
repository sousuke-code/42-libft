/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:46:56 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/24 23:28:50 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;

    // sをポインタ移動したものを返す。
    // 引数で受け取ったsはvoid型なのでunsigned char型に変更する必要がある。
    // また、sについては、const修飾子がついているためconst 修飾子をはずす必要がある。
    

    while(i < n)
    {
        if((unsigned char)*s == (unsigned char)c)
        {
            return (unsigned char )&s;
        }
        i++;
        s++;
        
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