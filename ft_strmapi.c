/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:05:04 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 20:11:25 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char change_word(unsigned int i, char c)
{
    if(i % 2 == 0) {
        c = '-';
    }
    return c;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    int len;
    unsigned int i;
    i = 0;

    len = ft_strlen((char *)s);
    str = malloc(len + 1);
    while(s[i] != '\0') {
        str[i] = f(i,s[i]);
        i++;
    }
    str[len+1] = '\0';
    return str;
}

