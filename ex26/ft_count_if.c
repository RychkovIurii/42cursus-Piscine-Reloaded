/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:54:18 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/07 17:10:44 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while(tab[i] != 0)
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return counter;
}
/* 
#include <stdio.h>

int starts_with_a(char *str) {
	if (str[0] == 'a' || str[0] == 'A') {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	char *words[] = {"apple", "banana", "orange", "grape", "Avocado", "kiwi", 0};

	printf("Words that start with 'a': %d\n", ft_count_if(words, &starts_with_a));

	return 0;
} */