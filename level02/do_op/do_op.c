/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:20:49 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:19:32 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/

#include "do_op.h"

int main(int argc, char **argv)
{
    int first;
    int second;
    int operation;

    if (argc == 4 && !argv[2][1])
    {
        first = atoi(argv[1]);
        second = atoi(argv[3]);
        if (argv[2][0] == '+')
            operation = first + second;
        if (argv[2][0] == '-')
            operation = first - second;
        if (argv[2][0] == '*')
            operation = first * second;
        if (argv[2][0] == '/')
            operation = first / second;
        if (argv[2][0] == '%')
            operation = first % second;
        printf("%d", operation);
    }
    printf("\n");
}
