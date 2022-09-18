/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:15:13 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:42:25 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_pos(int number)
{
	if (number < 10)
		ft_putchar(number + '0');
	else
	{
		ft_putnbr_pos(number / 10);
		ft_putnbr_pos(number % 10);
	}
}

int  main(int argc, char **argv)
{
    (void)argv;

    ft_putnbr_pos(argc - 1);
    write(1, "\n", 1);
    return (0);    
}

/*int  main(int argc, char **argv)
{
    int number;

    number = 0;
    while (argv && number < argc - 1)
        number++;
    ft_putnbr_pos(number);
    write(1, "\n", 1);
    return (0);    
}*/
