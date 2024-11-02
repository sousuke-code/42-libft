/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:56:29 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/02 15:11:16 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
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

