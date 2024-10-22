/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:54:45 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/22 22:01:54 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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