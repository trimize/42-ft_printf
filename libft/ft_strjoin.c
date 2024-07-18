/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:59:15 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:06:37 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

//allocates and returns a new string wich is s1 + s2

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		y;
	char	*cat;

	i = 0;
	y = 0;
	if (!s1)
		return (0);
	while (s1[i])
		i++;
	while (s2[y])
		y++;
	cat = (char *)malloc((i + y) + 1 * sizeof(char));
	if (!cat)
		return (0);
	i = 0;
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
		cat[i++] = s2[y++];
	return (cat[i] = 0, cat);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strjoin(argv[1], argv[2]));
	return (0);
}*/