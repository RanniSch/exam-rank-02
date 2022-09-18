/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:51:02 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:24:21 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/

#include <stddef.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return(i + 1);
            j++;
        }
        i++;
    }
    return (i + 1);
}

/*#include <stdio.h>
#include <string.h>
int main (void) 
{
   //const char str[20] = "aabbccddeeff"; 
   //const char searchString[10] = "dxz";
   const char str[20] = "ABCDEF4960910"; 
   const char searchString[10] = "013";
   int loc;

    //This function returns the number of characters present in the main string 
    //from beginning till the first matched character is found 

   loc = ft_strcspn(str, searchString);
   printf("The first matched char in string str1 is at: %d\n", (loc));
   return 0;
}*/
