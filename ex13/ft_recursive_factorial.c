/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:54:32 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/27 21:07:54 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if ((nb < 0) || (nb > 12)){
		return 0;
	}
	else if (nb == 0){
		return 1;
	}
	result = nb * ft_recursive_factorial(nb - 1);
	return result;
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_recursive_factorial(-32));
	printf("%d = 1\n", ft_recursive_factorial(0));
	printf("%d = 1\n", ft_recursive_factorial(1));
	printf("%d = 2\n", ft_recursive_factorial(2));
	printf("%d = 6\n", ft_recursive_factorial(3));
	printf("%d = 120\n", ft_recursive_factorial(5));
	printf("%d = 40320\n", ft_recursive_factorial(8));
	printf("%d = 0\n", ft_recursive_factorial(13));
}*/
// time ./a.out
// ./a.out  0.00s user 0.00s system 32% cpu 0.008 total