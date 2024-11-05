/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:50:30 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 17:50:33 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ans;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
		{
			ans = (int)((unsigned char)*s1 - (unsigned char)*s2);
			return (ans);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
