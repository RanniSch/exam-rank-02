/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:07:24 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:13:55 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4 && !argv[2][1] && !argv[3][1])  // check that second and third string are letters itn't requested
	{
        while (argv[1][i] != '\0')
		{
            if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
    }
	write(1, "\n", 1);
}

/*#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int i;
    int count_2;
    int count_3;

	i = 0;
	if (argc == 4)
	{
        count_2 = ft_strlen(argv[2]);	//pointer von argv[2]
        count_3 = ft_strlen(argv[3]);
        if (count_2 == 1 && count_3 == 1)
        {
            while (argv[1][i] != '\0' && argv[2][0] != '\0' && argv[3][0] != '\0')
		    {
                if (argv[1][i] == argv[2][0])
			    {
				    argv[1][i] = argv[3][0];
				    write(1, &argv[1][i], 1);
			    }
			    else
				    write(1, &argv[1][i], 1);
			    i++;
		    }
        }
	}
	write(1, "\n", 1);
}*/