/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:29:31 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 14:43:19 by rschlott         ###   ########.fr       */
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

Example, if you pass 2 to print_bits, it will print "00000010"; 1 is "00000001"; 0 is "00000000"

*/


/*
<< is the left shift operator. It is shifting the number 1 to the left 0 bits, which is equivalent to the number 1.
The reason that they can be combined together without interfering with each other is that each one is a power of two, 
and that is the reason for using 1 << x, because that yields powers of two:
1 << 0 == 2^0 == 1 == binary 00000001
1 << 1 == 2^1 == 2 == binary 00000010
1 << 2 == 2^2 == 4 == binary 00000100
1 << 3 == 2^3 == 8 == binary 00001000
etc
128 is a reversed byte!!!
*/

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

/*int main(void)
{
	unsigned char chr;
	
	chr = 8;
	print_bits(chr);
	return (0);
}*/
