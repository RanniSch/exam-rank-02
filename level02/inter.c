/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:03 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:50:07 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <stdio.h>
#include <unistd.h>

//checks if char already exists in str1;
int	ft_check_doubles(char *str, char c, int index)
{
	int i;

	i = 0;

	while (i < index)
	{
		if (str[i] == c)
		{
			return(0);
		}
		i++;
	}
	return(1);
}

//iterate through str2 for each position of str1;
//if same chars then check if char already exists in str1;
//if no write it and break the loop;
int main(int argc, char **argv)
{
	int i;
    int j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (ft_check_doubles(argv[1], argv[1][i], i) == 1)
					{
						write(1, &argv[2][j], 1);
						break ;
					}
				}
				j++;
			}	
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
