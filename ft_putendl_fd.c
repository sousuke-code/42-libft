/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:58:10 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 15:53:54 by sosmiyat         ###   ########.fr       */
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

void ft_putendl_fd(char *s, int fd)
{
    write(fd,s,ft_strlen(s));
    write(fd, "\n", 1);
}