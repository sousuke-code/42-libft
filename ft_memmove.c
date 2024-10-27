/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:45:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 23:30:20 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dist, const void *src, size_t n)
{
	//戻り値はdistのポインタを返す
	// memsetとの違いはコピー元のメモリ領域とコピー先のメモリ領域が重なっても問題ない。
	// オーナーラップの処理を行わないといけない。
	// nを0になるまでループさせる中で、srcをn回分distに対してのコピーを行う
	const unsigned char *src_cpy;
	unsigned char *p = (unsigned char *)dist;
	src_cpy = (const unsigned char *)src;

	if(dist == NULL && src == NUL) {
		return NULL;
	}

	while (n > 0)
	{
		*p = *src_cpy;
		p++;
		src_cpy++;
		n--;
	}

	return (dist);
}
