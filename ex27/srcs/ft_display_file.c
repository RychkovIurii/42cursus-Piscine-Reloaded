/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:22:51 by irychkov          #+#    #+#             */
/*   Updated: 2024/04/07 19:44:07 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int ft_display_file(char *filename)
{
	int	fd;
	int bd;
	char buffer[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return 1;
	}
	while ((bd = read(fd, buffer, 1)) > 0)
	{
		write(1, &buffer[0], 1);
	}
	if ( bd == -1)
		{
			close(fd);
			write(1, "Cannot read file.\n", 18);
			return 1;
		}
	if (close(fd) == -1) {
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return 1;
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return 1;
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return 0;
}