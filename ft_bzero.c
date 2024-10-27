/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:42:03 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:52:46 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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