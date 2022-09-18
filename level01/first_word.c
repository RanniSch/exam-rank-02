/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:08:03 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:02:31 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
-------------------------------------------------------------------------------- 

Write a program that takes a string and displays its first word,
	followed by a
newline.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat
	-e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> 
Compile like in the exercise: gcc -Wall -Wextra -Werror "first_word.c"
	-o first_word
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		while ((argv[1][i] != '\t' && argv[1][i] != ' ') && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

void	first_word(char *ptr)
{
    int     i;

    i = 0;
    while (ptr[i] == '\t' || ptr[i] == ' ')
    {
        i++;
        continue ;
    }
    while (ptr[i] != '\0')
    {
        if (ptr[i] == '\t' || ptr[i] == ' ')
        {
            //write(1, "\n", 1);
            break ;
        }
        write(1, &ptr[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int	main(void)
{
    char    *ptr;

    //char    fst_word[15] = "FOR PONY";
    //char    fst_word[60] = "this        ...    is sparta, then again,
	maybe    not";
    //char    fst_word[15] = "   ";
    //char    fst_word[60] = "  lorem,ipsum  ";
    char    fst_word[15] = "a" "b";  
	// for this we need argc and argv; argc == 2
    ptr = &fst_word[0];
    first_word(ptr);
    return(0);
}
*/
