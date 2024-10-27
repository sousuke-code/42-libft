/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:53:37 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 15:54:06 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_strlen(char *c)
{
    int i;
    i = 0;
    while(*c) {
        c++;
        i++;
    }
    return i;
}

void ft_putstr_fd(char *s, int fd)
{
   write(fd,s,ft_strlen(s));
}
