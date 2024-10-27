/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:54:45 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:55:51 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122 )
    {
        c = c - 32;
    }
    return c;
    
}

int main(void)
{
    char c = 'A';
    char b = 'a';
    printf("%c", ft_toupper(c));
    printf("\n");
    printf("%c", ft_toupper(b));
    
}