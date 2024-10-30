/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:58:10 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/31 00:55:22 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
      return ;
    write(fd,s,ft_strlen(s));
    write(fd, "\n", 1);
}