/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:34:23 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 20:02:00 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void change_words(unsigned int i, char *str)
{
    //奇数文字目を"-"に変更する関数
    if (i % 2 == 0) {
      *str =  '-';
    }
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    // 第一引数　反復処理の対象となる引数
    // 各文字に適用する関数
    unsigned int i;
    i = 0;
    while(*s) {
        f(i, s);
        s++;
        i++;
    }
}
