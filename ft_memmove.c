/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:45:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/02 16:50:42 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *src_cpy;
	unsigned char *dst_cpy = (unsigned char *)dst;
	src_cpy = (const unsigned char *)src;

	if(dst == NULL || src == NULL) {
		return NULL;
	} 
	

	while (len > 0)
	{
		dst_cpy[len - 1] = src_cpy[len-1];
		len--;
	}

	return (dst);
}
