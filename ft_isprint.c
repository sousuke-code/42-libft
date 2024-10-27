/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:56:08 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 15:56:11 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}


int main(void)
{

    int c = 'A';
    printf("%d", ft_isprint(c));
    
}