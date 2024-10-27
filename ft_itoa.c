/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:05:31 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 11:28:32 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
	int		sign;
	char	*str;

	sign = 0;
	len = count_digits(n);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}

	str = malloc(len + 1);
	while (n > 0)
	{
		str[len-1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return str;
}

int	main(void)
{
	int i = 19899898;
	char *ans;
	ans = ft_itoa(i);
	printf("%s\n", ans);
}