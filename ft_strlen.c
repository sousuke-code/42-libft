/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:29:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 22:21:34 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


int ft_strlen(const char *c)
{
    size_t i;

    i = 0;
    
    while(*c != '\0')
    {
     i++;
     c++;
    }

    return i;
}

