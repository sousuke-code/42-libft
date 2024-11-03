/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:04:22 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/03 16:44:09 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	max_cpy;
	size_t	n;

	n = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	max_cpy = dstsize - dst_len - 1;
	while (n < max_cpy && src[n] != '\0')
	{
		dst[dst_len + n] = src[n];
		n++;
	}
	dst[dst_len + n] = '\0';
	return (dst_len + src_len);
}
