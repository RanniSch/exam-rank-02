/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:46:14 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:47:58 by rschlott         ###   ########.fr       */
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

#include <stddef.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}

/*#include <stdio.h>
#include <string.h>
int main (void) 
{
    //const char str[20] = "aabbccddeeff"; 
    //const char searchString[10] = "dxz";
    const char str[20] = "ABC DEF 4960910"; 
    const char searchString[10] = "ABC DE";
    int len;
    const char    *s;
    const char    *accept;

    s = &str[0];
    accept = &searchString[0];

    //This function returns the number of characters present in the main string 
    //from beginning till the first matched character is found 
    
    len = ft_strspn(s, accept);
    //len = strspn(s, accept);
    printf("Length of initial segment matching: %d\n", (len));
    return (0);
}*/
