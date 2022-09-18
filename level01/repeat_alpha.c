/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:21:35 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:08:51 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
Compile like in the exercise: gcc -Wall -Wextra -Werror "first_word.c"
	-o repeat_alpha.c
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			k = -1;
			if (argv[1][i] >= 65 && argv[1][i] < 91)
			{
				while (k++ < argv[1][i] - 65)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 97 && argv[1][i] < 123)
			{
				while (k++ < argv[1][i] - 97)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
