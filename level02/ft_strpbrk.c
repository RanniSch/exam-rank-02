/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:04:29 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:24:48 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/

#include <stddef.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
    int j;

    while (*s1)
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (*s1 == s2[j])
                return ((char *)s1);
            j++;
        }
        s1++;
    }
    return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char    string1[9] = "aswrtg94";
    char    string2[4] = "dr3";
    char    *s1;
    char    *s2;
    //char    *ret;

    s1 = &string1[0];
    s2 = &string2[0];
    //ret = strpbrk(s1, s2);
    //printf ("%c\n", *ret);
    printf ("%c\n", *ft_strpbrk(s1, s2));
}*/
