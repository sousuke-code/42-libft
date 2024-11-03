/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:31:15 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/03 15:40:12 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*pp;

	p = (unsigned char *)dst;
	pp = (unsigned char *)src;
	while (n > 0)
	{
		*p = *pp;
		p++;
		pp++;
		n--;
	}
	return (dst);
}
