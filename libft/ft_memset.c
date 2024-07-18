/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:50:07 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:19:50 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include <string.h>

//fills n bytes of the memory area pointed by s with c

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		((unsigned char *)s)[i] = c;
		n--;
		i++;
	}
	return (s);
}

/*int	main(int argc, char **argv)
{
	int		i;
	int		a;
	void	*s;

	a = atoi(argv[3]);
	i = 0;
	s = ft_memset((void *)argv[1], atoi(argv[2]), (size_t)atoi(argv[3]));
	(void)argc;
	while (i < a)
	{
		printf("%d\n", ((int *)s)[i]);
		i++;
	}
	return (0);
}*/