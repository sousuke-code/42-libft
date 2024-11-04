/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:12:52 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/04 18:20:34 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	little_len;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	little_len = ft_strlen((char *)little);
	while (n >= little_len && *big != '\0')
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		n--;
		big++;
	}
	return (NULL);
}
