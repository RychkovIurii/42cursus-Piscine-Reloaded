/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:51:05 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/28 10:18:31 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}
/* 
#include <string.h>
#include <stdio.h>
int main (void)
{
	char str1[] = "c\0";
	char str2[] = "c\200c";
	int test = ft_strcmp(str1, str2);
	int orig = strcmp(str1, str2);

	printf("%d = ft_strcmp\n", test);
	printf("%d = strcmp\n", orig);
} */