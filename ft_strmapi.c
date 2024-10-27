/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:05:04 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 12:47:27 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *c)
{
    int i;
    i = 0;
    while(*c) {
        c++;
        i++;
    }
    return i;
}
 
char change_words(unsigned int i, char c)
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

int main(void){
    char str[] ="abcdef";
    char *str2 = ft_strmapi(str, change_words);
    printf("%s\n", str2);
}