/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:04:45 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 22:26:33 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
   if (s == NULL)
      return NULL;
    while (*s != '\0')
    {
        if (*s == (unsigned char)c)
        {
            return (char *)s;
        }
        s++;
    }

    if(c == '\0')
    {
        return (char *)s;
    }
    return NULL;
    
}