/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:53:38 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:20:57 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

/*char	test(unsigned int n, char c)
{
	return (c + n);
}*/

//applies f to each char of s, i is the first argument of f
//allocates another char * resulting from these successive applications

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	map = (char *)malloc(i + 1 * sizeof(char));
	if (!map)
		return (0);
	i = 0;
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = 0;
	return (map);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strmapi(argv[1], test));
	return (0);
}*/