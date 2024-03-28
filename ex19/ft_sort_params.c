/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:17:50 by irychkov          #+#    #+#             */
/*   Updated: 2024/03/28 12:28:00 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b) {
	char *temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;

	k = 1;
	j = 1;
	while (j < argc)
	{
		i = j;
		while (i > 1 && ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			ft_swap(&argv[i], &argv[i - 1]);
			i = i - 1;
		}
		j = j + 1;
	}
	while (k < argc)
	{
		ft_putstr(argv[k]);
		k = k + 1;
	}
}