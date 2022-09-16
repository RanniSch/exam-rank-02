/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:07:49 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/16 22:26:50 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

int *ft_range(int start, int end)
{
    int length;
    int *ptr;
    int begin;

    length = end - start + 1;
    if (length < 0)
        length = length * (-1);
    if (start == end)
        length = 1;
    ptr = (int *)malloc(length * sizeof(int));
    if (ptr == NULL)
        return (NULL)
    else
    {
        begin = start;
        while (begin <= end)
        {
            ptr = &begin;
            beginn++;
        }
    }
    return (ptr);
}

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>

int main(void)
{
    int start;
    int end;
    int *ptr;

    start = 1;
    end = 5;
    ptr = ft_range(start, end)
    printf("%p", ptr);
}