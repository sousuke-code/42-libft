/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:19:52 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 20:03:07 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    if (c == '\0')
    {
        return (char *)s;
    }

    while(*s != '\0')
    {
        s++;
        i++;
    }

    while(i >= 0 )
    {
        if (*s == (char )c)
        {
            return (char *)s;
        }
        s--;
        i--;
        
    }
    
    return NULL;
    
}

