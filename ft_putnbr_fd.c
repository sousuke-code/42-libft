/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:02:37 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 14:29:16 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar_fd(char c, int fd)
{
   write(fd, &c , 1);
}


void ft_putnbr_fd(int n, int fd)
{
    if(n < 0) {
        ft_putchar_fd('-',fd);
    }
    while(n >= 10) {
        ft_putnbr_fd(n / 10 ,fd);
        //再下位まで再帰していく。
    }
    
    ft_putchar_fd(n % 10 + '0', fd);
}