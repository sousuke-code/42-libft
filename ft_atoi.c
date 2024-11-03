/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:57:48 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/03 12:07:29 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

const char	*ft_isspace(const char *string)
{
	while (*string == '\t' || *string == '\n' || *string == '\v'
		|| *string == '\f' || *string == '\r' || *string == ' ')
	{
		string++;
	}
	return (string);
}

const char	*judge_sign(const char *string, int *sign)
{
	if (*string == '+' || *string == '-')
	{
		if (*string == '-')
		{
			*sign = -1;
		}
		string++;
	}
	return (string);
}

int	ft_atoi(const char *string)
{
	long long	result;
	int			sign;
	int			digit;

	sign = 1;
	result = 0;
	string = ft_isspace(string);
	string = judge_sign(string, &sign);
	while (*string >= '0' && *string <= '9')
	{
		digit = *string - '0';
		if (sign == 1 && (result > LONG_MAX / 10 || (result == LONG_MAX / 10
					&& digit > LONG_MAX % 10)))
			return ((int)LONG_MAX);
		if (sign == -1 && (result > LONG_MAX / 10 || (result == LONG_MAX / 10
					&& digit > LONG_MAX % 10)))
			return ((int)LONG_MIN);
		result = 10 * result + digit;
		string++;
	}
	result = (int)(result * sign);
	return (result);
}
