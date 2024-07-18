/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:22:08 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:19:54 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <fcntl.h>*/

//writes a letter to a file

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(int argc, char **argv)
{
	int	fd;

	(void)argc;
	fd = open(argv[1], O_RDWR);
	ft_putchar_fd(argv[2][0], fd);
	return (0);
}*/