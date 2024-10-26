/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:00:37 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/10/26 12:59:05 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *c)
{
    int i;

    i = 0;

    while (*c != '\0')
    {
        i++;
        c++;
    }
    return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    //start= 開始のインデックス
    //len = startのインデックから何も自分を出力するか

    char *ans;
    ans = malloc(len+1);
    
    int s_len;
    unsigned int index;
    unsigned int  i;
    i = 0;
    index = 0;
    s_len = ft_strlen((char *)s);


    if (len <= 0){
        return NULL;
    }

    if (start >= s_len) {
        return NULL;
    }

    while (*s != '\0' && index <= start + len -1)
    {
        if (index >= start)
        {
            ans[i] = *s; //ansに対してsのindex文字を代入していく
            i++;
        }
        index++;
        s++;
    }
    ans[len+1] = '\0';

    return ans;
    

    //新たに作った文字列を返す
    //割当に失敗した場合はNULLを返す
    //文字列sのstart文字目からlen文字分目をmallocで確保したchar*に入れてそれを返す。
    
    //注意点start>= ft_strlen(s)の場合には空の文字列を返す。
    // len == 0のときも空の文字列を返す
    // lenが長すぎて、sの終わりを超える場合にはsの最後まで抽出した文字列を返す。//TODO



}


int main(void)
{

    printf("%s", ft_substr("aiueo", 2, 2));
    char *str1 =  "hello";
    printf("%s", ft_substr(str1, 2, 2));

}