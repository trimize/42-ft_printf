/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:47:02 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:01:06 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <fcntl.h>*/

//outputs a string to a file

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, &s[0], i);
}

/*int	main(int argc, char **argv)
{
	int	fd;

	(void)argc;
	fd = open(argv[1], O_RDWR);
	ft_putstr_fd(argv[2], fd);
	return (0);
}*/