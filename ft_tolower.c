/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:03:27 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/22 22:03:51 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 65 && c <= 90 )
    {
        c = c + 32;
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