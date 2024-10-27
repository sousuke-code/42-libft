/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:29:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:55:18 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


int ft_strlen(char *c)
{
    int i;

    i = 0;
    
    while(*c != '\0')
    {
     i++;
     c++;
    }

    return i;
}

int main(void)
{
    char *c = "hello world";
    printf("%d", ft_strlen(c));
}