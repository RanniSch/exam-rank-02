/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:46:14 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/15 18:49:16 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);

This function returns the number of characters in the initial segment of str1 
which consist only of characters from str2.*/

/*
size_t  ft_strspn(const char *s, const char *accept)
{
    
}

#include <stdio.h>
#include <string.h>
int main () 
{
    //const char str[20] = "aabbccddeeff"; 
    //const char searchString[10] = "dxz";
    const char str[20] = "ABC DEF 4960910"; 
    const char searchString[10] = "DEF";
    int len;
    char    *s;
    char    *accept;

    s = &str[0];
    accept = &searchString[0];

   /* This function returns the number of characters present in the main string 
    * from beginning till the first matched character is found 
    
   len = strspn(s, accept);
   printf("Length of initial segment matching: %d\n", (len));
   return 0;
}
