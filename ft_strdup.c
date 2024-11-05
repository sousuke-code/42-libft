/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:49:56 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 17:50:00 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;
	int		len;

	len = 0;
	i = 0;
	len = ft_strlen((char *)s1);
	p = (char *)malloc(len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		p[i] = *s1;
		i++;
		s1++;
	}
	p[len] = '\0';
	return (p);
}
