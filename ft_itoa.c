/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:05:31 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 00:43:37 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	count_digits(long n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	 count = 1;
	
	if (n < 0)
	{
		n = -n;
		count++;
	}

	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

// n = 162222
// % =一位のくらい
// / =1の位を除いた数

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	size_t sign;
	long n_cpy;
    
	sign =0;
	n_cpy = n;
	len = count_digits(n_cpy);
	str = malloc(len + 1);
	if (str == NULL)
	{
		return NULL;
	}

	str[len] = '\0';
	if (n_cpy < 0)
	{
		str[0] = '-';
		n_cpy = -n_cpy;
		sign = 1;
	}
	while (len > sign)
	{
		str[len-1] = (n_cpy % 10) + '0';
		n_cpy = n_cpy / 10;
		len--;
	}
	return str;
}

