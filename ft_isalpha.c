/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:54:54 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/22 20:58:24 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_alpha(int c)
{
    if(c >= 'A' && c <= 'C')
    {
        return 1;
    }
    else if(c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else {
        return 0;
    }
}


int main (void)
{
    char c = '1';
    printf("%d", ft_alpha(c));
}