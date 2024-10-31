/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:42:03 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 22:00:47 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    if (s == NULL || n == 0)
       return ;
    
    unsigned char *s_cpy = (unsigned char *)s;
    while(n > 0)
    {
        *s_cpy = '\0';
        n--;
        s_cpy++;
    }
    
}
