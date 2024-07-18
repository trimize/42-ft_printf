/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:59:55 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 18:55:11 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>*/
#include <string.h>
/*#include <stdio.h>*/

//compares 2 arrays for the first n bytes

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]) &&
	(i < n - 1))
		i++;
	return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
}

/*int	main(int argc, char **argv)
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

	(void)argv;
	(void)argc;
	printf("%d\n", ft_memcmp(s2, s3, 58));
	printf("%d", memcmp(s2, s3, 58));
	//printf("%d", ft_memcmp(((const void **)argv)[1], 
	((const void **)argv)[2], (size_t)atoi(argv[3])));
	return (0);
}*/