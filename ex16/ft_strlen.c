/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:44:04 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/28 09:49:49 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}
/* 
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello Hive";

	printf("Len = %d, str = Hello Hive", ft_strlen(str));
} */