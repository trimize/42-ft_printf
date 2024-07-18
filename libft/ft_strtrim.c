/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:12:28 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:21:14 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>
#include "libft.h"

//allocates and returns a string with the array set removed from
//the beginning and the end of s1

static int	isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		y;
	int		x;
	char	*trim;

	i = 0;
	x = 0;
	if (!s1)
		return (0);
	y = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && isinset(s1[i], set))
		i++;
	while (s1[y] && isinset(s1[y], set))
		y--;
	y++;
	if (y == 0)
		return (ft_strdup(""));
	trim = (char *)malloc((y - i + 1) * sizeof(char));
	if (!trim)
		return (0);
	while (s1[i] && i < y)
		trim[x++] = s1[i++];
	return (trim[x] = 0, trim);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/