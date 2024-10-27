/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:05:31 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 01:37:45 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    while(*str) {
        str++;
        i++;
    }
    return i;
}


char *ft_itoa(int n)
{
    int sign;
    int cpy;
    char *str;
    sign = 0;
    if (n < 0) {
        sign =1;
        n = -n;
    }

    cpy = n;

    while(cpy > 0) {
        cpy = cpy / 10;
    }

    if (sign = 1){
    str = malloc(cpy+2);
    }else {
        str = malloc(cpy + 1);
    }

    while(n > 0) {
        *str = n % 10 + '0';  
        str++;
        n = n / 10;
    }
    
       
}