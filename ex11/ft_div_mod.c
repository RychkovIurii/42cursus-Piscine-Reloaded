/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:14:44 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/27 17:15:25 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main(void){
	int a = 7, b = 3, div, mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d is div. %d is mod. a = 7. b = 3.", div, mod);
	return 0;
}*/