/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:19:58 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:54:39 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char *strdup(const char *s1)
{
    char *p;
    int i;
    int len;
    len = 0;
    i = 0;

    len = ft_strlen(s1);
    p = (char *)malloc(len+1);
    if (p ==NULL){
        return NULL;
    }

    while(*s1 != '\0'){
        p[i] = *s1;
        i++;
        s1++;
    }
    p[len] = '\0';
    return p;
}