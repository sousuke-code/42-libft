/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:45:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/04 18:21:08 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_cpy;
	unsigned char	*dst_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	if (src_cpy < dst_cpy)
	{
		dst_cpy += len - 1;
		src_cpy += len - 1;
		while (len > 0)
		{
			*dst_cpy-- = *src_cpy--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*dst_cpy++ = *src_cpy++;
			len--;
		}
	}
	return (dst);
}
