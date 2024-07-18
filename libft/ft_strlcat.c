/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:53:23 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:20:39 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>
#include <bsd/string.h>*/
#include  "libft.h"

//adds src to dest with a final size in argument
//len(src) + len(dest) is returned if size > len(dest)
//otherwise, len(src) + size is returned

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	lengdest;
	unsigned int	lengsrc;

	i = 0;
	lengsrc = ft_strlen(src);
	if (!dest && size == 0)
		return (lengsrc + 1);
	lengdest = ft_strlen(dest);
	if ((unsigned int)size <= lengdest)
		return (lengsrc + size);
	while ((i < (unsigned int)size - lengdest - 1) && src[i] != '\0')
	{
		dest[lengdest + i] = src[i];
		i++;
	}
	dest[lengdest + i] = '\0';
	return (lengsrc + lengdest);
}

/*int	main(void)
{
	char s8a[20] = "ThanMyself";
	char s7b[] = "Shorter";
	char s8a2[20] = "ThanMyself";
	char s7b2[] = "Shorter";

	printf("%u\n", ft_strlcat(s8a, s7b, ));
	printf("%s\n", s8a);
	printf("%lu\n", strlcat(s8a2, s7b2, ));
	printf("%s\n", s8a2);
	return 0;
}*/