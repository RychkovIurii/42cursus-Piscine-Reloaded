/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:06:15 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/06 17:34:06 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*ptr;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		return NULL;
	}
	ptr = (int *)malloc(len * sizeof(int));
	if (ptr == NULL)
		return NULL;
	while (i < len)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = ft_range(5, 9);
	printf("The elements of the array are:\n");
	while (i < 4)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
} */