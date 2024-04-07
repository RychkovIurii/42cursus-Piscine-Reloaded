/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:40:44 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/07 16:52:46 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/* 
#include <stdio.h>

void print_square(int n) {
	printf("%d ", n * n);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("Squares of elements: ");
	ft_foreach(arr, length, &print_square);
	printf("\n");

	return 0;
} */