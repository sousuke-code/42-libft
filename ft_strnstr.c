/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:12:52 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/04 14:21:17 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		little_len;

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
int main(void)
{
}