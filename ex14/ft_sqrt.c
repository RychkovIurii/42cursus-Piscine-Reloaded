/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:18:10 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/27 22:31:47 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	min;
	int mid;
	int max;
	int square;

	min = 1;
	max = nb;
	if ((nb <= 0) || (nb > 2147395600))
		return 0;
	while (min <= max) 
	{
		mid = min + (max - min) / 2;
		square = mid * mid;
		if (square == nb)
			return mid;
		else if (square < nb)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return 0;
}
/* 
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_sqrt(-40));
	printf("%d = 0\n", ft_sqrt(0));
	printf("%d = 1\n", ft_sqrt(1));
	printf("%d = 0\n", ft_sqrt(2));
	printf("%d = 0\n", ft_sqrt(3));
	printf("%d = 2\n", ft_sqrt(4));
	printf("%d = 5\n", ft_sqrt(25));
	printf("%d = 46340\n", ft_sqrt(2147395600));
	printf("%d = 0\n", ft_sqrt(2147483647));
} */