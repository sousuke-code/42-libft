/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:11:36 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/30 21:34:46 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


int pattern_match(char c, char *str)
{
    int i;
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
    if (s1 == NULL || set == NULL)
     return NULL;
    
    char *str;
    size_t len;
    size_t start;
    size_t end;
    start = 0;
    len = ft_strlen((char *)s1);
    end = len;

    while(s1[start] != '\0' && pattern_match(s1[start],(char *)set))
      start++;

    while(end > start && pattern_match(s1[end-1], (char *)set))
      end--;

    str = malloc(end - start +1);
    if (str == NULL)
      return NULL;

    ft_strlcpy(str,&s1[start], end - start + 1);
    
    return str;

}

