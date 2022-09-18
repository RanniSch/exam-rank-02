/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:30:21 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:25:27 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char    temp;

    len = 0;
    while (str[len] != '\0')
        len++;
    i = 0;
    len = len - 1;
    while (i < len)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        i++;
        len--;
    }
    return (str);
}

/*#include <stdio.h>

int main(void)
{
    char string[8] = "wer was";
    char    *str;
    //char    *rev;

    str = &string[0];
    //rev = ft_strrev(str);
    //printf("%s\n", rev);
    printf("%s\n", ft_strrev(str));
}*/
