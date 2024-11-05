/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:48:45 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 17:48:50 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

static int	count_digits(long num)
{
	size_t	count;

	count = 0;
	if (num == 0)
		count = 1;
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*str;
	long	n_cpy;

	sign = 0;
	n_cpy = n;
	len = count_digits(n_cpy);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n_cpy < 0)
	{
		str[0] = '-';
		n_cpy = -n_cpy;
		sign = 1;
	}
	while (len > sign)
	{
		str[len - 1] = (n_cpy % 10) + '0';
		n_cpy = n_cpy / 10;
		len--;
	}
	return (str);
}
