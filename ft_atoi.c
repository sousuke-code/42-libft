/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:47:16 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 17:47:34 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static const char	*ft_isspace(const char *string)
{
	while (*string == '\t' || *string == '\n' || *string == '\v'
		|| *string == '\f' || *string == '\r' || *string == ' ')
	{
		string++;
	}
	return (string);
}

static const char	*judge_sign(const char *string, int *sign)
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
	long	result;
	int		sign;
	int		digit;

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
