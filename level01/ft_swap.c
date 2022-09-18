/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:08:17 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:07:59 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>
int	main(void)
{
    int a;
    int b;
    int *ptr_a;
    int *ptr_b;

    a = 5;
    b = 3;
    printf("%d %d \n", a, b);
    ptr_a = &a;
    ptr_b = &b;
    ft_swap(ptr_a, ptr_b);
    printf("%d %d", a, b);
    return(0);
}*/
