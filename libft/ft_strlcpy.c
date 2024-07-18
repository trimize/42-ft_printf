/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:55:13 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:09:40 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>
#include "libft.h"

//copies size - 1 bytes from src to dest returns like strlcat

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((src[i] != '\0') && (size - 1 > 0))
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int	main()
{
	char	a[] = "ouiouibruh";
	char	b[] = "non\x15nonbruh";
	char	c[] = "ouiouibruh";
	char	d[] = "non\x15nonbruh";

	printf("%u\n", ft_strlcpy(a, b, 12));
	printf("%s\n", a);
	printf("%d\n", ft_strlen(a));
	printf("%zu\n", strlcpy(c, d, 11));
	printf("%s\n", c);
	printf("%d\n", ft_strlen(c));
}*/