/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:49:24 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:19:06 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdlib.h>
#include <stdio.h>*/

//searches the first instance of c in s for n bytes

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", (char *)memchr(argv[1], atoi(argv[2]), (size_t)atoi(argv[3])));
	return (0);
}*/