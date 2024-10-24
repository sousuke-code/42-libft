/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:42:03 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/25 01:29:19 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    while(n > 0)
    {
        *p = '\0';
        n--;
        p++;
    }
    
}

int main(void)
{
    char str[] = "abcdcdee";
    int c = 2;


    ft_bzero(str, c);
    printf("%c",str[1]);

    
}