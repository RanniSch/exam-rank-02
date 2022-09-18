/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:40:26 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:24:44 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *dup;

    i = 0;
    while (src[i] != '\0')
        i++;
    dup = (char *)malloc((i + 1) * sizeof(char));
    i = 0;
    if (dup == NULL)
        return (NULL);
    else
    {
        while (src[i] != '\0')
        {
            dup[i] = src[i];
            i++;
        }
        dup[i] = '\0';
    }    
    return(dup);
}

/*#include <stdio.h>

int main(void)
{
    char    source[13] = "Wer weiß was";    // 13 wegen '\0' nach dem letzten Buchstaben
    char    *src;

    src = &source[0];
    printf("%s\n", ft_strdup(src));
}*/
