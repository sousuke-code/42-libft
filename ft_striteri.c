/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:34:23 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/27 12:03:55 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(void) {
    char str[] = "abcdef";
    
    ft_striteri(str, change_words); 
    
    printf("%s\n", str); 
}