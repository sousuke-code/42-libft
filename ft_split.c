/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:13:07 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 01:03:38 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int count_words (char const *s, char c)
{
    // s1="AAABBAAACCAAA"
    // c= A
    int head_word_count;
    int i;
    head_word_count = 0;
    i = 0;
    while(*s) {
       if (*s != c && head_word_count == 0) {
         head_word_count = 1;
         i++;
       }else if ( *s == c){
        head_word_count = 0;
       }
       s++;
    }
    return i;
}

void *ft_memcpy(void *dist, const void *src, size_t n)
{
    unsigned char *p = (unsigned char *)dist;
    const unsigned char *pp = (const unsigned char *)src;
    while (n > 0)
    {
        *p = *pp;
        p++;
        pp++;
        n--;
    }
    return dist;
}




char **ft_split(char const *s, char c)
{
    //分裂後のメモリを確保
    //一つ一つの配列に対してコピーを行なっていく
    //配列の要素数分のmallocを行う
    //その後に、各配列に入れる文字数分のmallocを行い挿入を行なっていく。
    char **ans;
    int words_counts;
    int i;
    int len;
    i = 0;
    words_counts = count_words(s,c);
    ans = malloc((words_counts+1) * sizeof(char *));

    while(*s) {
        if (*s != c) {
            char const *p = s;
            len = 0;
            while(*s && *s != c) {
                //配列一つ分の要素数をカウント
                len++;
                s++;
            }
            ans[i] = malloc(len+1);
            
            ft_memcpy(ans[i],p,len);
            ans[i][len] = '\0';
            i++;
        }
        s++;
    }
    ans[i] = NULL;

    return ans;
}

int main(void)
{
    char **ans;
    int i = 0;
    char *c = "AAABBBAADDDDAADDDD";
    char d = 'A';
    ans = ft_split(c, d);

    // 各単語を出力
    while (ans[i]) {
        printf("%s\n", ans[i]);
        free(ans[i]);  // メモリの解放
        i++;
    }
    free(ans);  // 配列自体の解放

    return 0;
}