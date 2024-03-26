/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:44:50 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/26 20:44:50 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main(void)
{
	int a, b;

	a = 3;
	b = 6;
	printf("Before swap: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
}*/