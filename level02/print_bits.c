/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:29:31 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/16 08:47:37 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/

void    print_bits(unsigned char octet)
{
    
}


/*#include <stdio.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet = octet % i;
			i = i / 2;
		}
		else
		{
			write(1, "0", 1);
			i = i / 2;
		}
	}
}

int main()
{
	unsigned char chr = 2;

	print_bits(chr);
	return (0);
}*/