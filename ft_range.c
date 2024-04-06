/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:06:15 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/06 17:22:22 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*ptr;

	i = 0;
	len = max - min;
	if (min > max)
	{
		return NULL;
	}
	ptr = (int *)malloc(sizeof(int) * len);
	if (ptr == NULL)
		return NULL;
	while (i < len)
	{
		ptr[i] = min;
		min++;
	}
	return (*ptr);
}