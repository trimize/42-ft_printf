/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:40:44 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:21:10 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

//returns a pointer to the last occurence of c in s

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	a;

	i = 0;
	a = -1;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			a = i;
		i++;
	}
	if (a != -1)
		return ((char *)&s[a]);
	if ((unsigned char)c == 0)
		return ((char *)&s[i]);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strrchr(argv[1], atoi(argv[2])));
	return (0);
}*/