/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:11:36 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:55:36 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


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

int pattern_match(char c, char *str)
{
    int i;
    int ans;
    ans = 0;
    i = 0;
    while(str[i] != '\0') {
        if (c == str[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int len;
    int i;
    i = 0;
    len = ft_strlen((char *)s1);
    str = malloc(len +1);
    while(*s1) {
        if (pattern_match(*s1, (char *)set) == 0){
            str[i] = *s1;
            i++;
        }
        s1++;
    }
    str[i] = '\0';
    
    return str;

}

int main(void)
{

    printf("%s", ft_strtrim("1234AAAAA2223331122","1234"));
    
}