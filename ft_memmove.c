/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:45:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/25 12:49:39 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dist, const void *src, size_t n)
{
	//戻り値はdistのポインタを返す
	// memsetとの違いはコピー元のメモリ領域とコピー先のメモリ領域が重なっても問題ない。
	// nを0になるまでループさせる中で、srcをn回分distに対してのコピーを行う
	const unsigned char *src_cpy;
	unsigned char *p = (unsigned char *)dist;
	src_cpy = (const unsigned char *)src;

	while (n > 0)
	{
		*p = *src_cpy;
		p++;
		src_cpy++;
		n--;
	}

	return (dist);
}

int main(void)
{
    char str[]  = "Hello, World!";
    ft_memmove(str+7, str, 5);
    printf("%s", str);
}