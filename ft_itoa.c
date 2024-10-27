/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:05:31 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 20:01:12 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
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
	int		len;
	char	*str;

	len = count_digits(n);
	str = malloc(len + 1);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[len-1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return str;
}

