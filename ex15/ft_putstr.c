/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:35:40 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/14 21:56:51 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
/* 
#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main() {
	char *test_string = "Hello, world!";

	printf("Expected Output: %s\n", test_string);
	printf("Actual Output: \n");
	ft_putstr(test_string);
	return 0;
} */