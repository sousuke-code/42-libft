/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:56:29 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 01:06:18 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


void *ft_calloc(size_t count, size_t size){
    void *block;

    if (count > SIZE_MAX  / size)
      return NULL;
    
    block = malloc(count * size);
    if (block == NULL) {
        return NULL;
    }
    ft_memset(block, 0, count*size);
    return block;
}

