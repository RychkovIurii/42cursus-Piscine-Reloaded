/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:49:24 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/27 20:52:45 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb = nb - 1;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_iterative_factorial(-32));
	printf("%d = 1\n", ft_iterative_factorial(0));
	printf("%d = 1\n", ft_iterative_factorial(1));
	printf("%d = 2\n", ft_iterative_factorial(2));
	printf("%d = 6\n", ft_iterative_factorial(3));
	printf("%d = 120\n", ft_iterative_factorial(5));
	printf("%d = 40320\n", ft_iterative_factorial(8));
	printf("%d = 0\n", ft_iterative_factorial(13));
}*/
// ./a.out  0.00s user 0.00s system 1% cpu 0.288 total