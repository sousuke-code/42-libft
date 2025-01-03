/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:34:59 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 18:35:27 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
