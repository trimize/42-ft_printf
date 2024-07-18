/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:33:29 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:19:29 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>
#include <stdlib.h>*/

//copies n bytes from memory area src to dest, works around overlapping

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	char		*tmp2;
	size_t		i;

	i = 0;
	tmp = (char *)dest;
	tmp2 = (char *)src;
	if (!dest && !src)
		return (0);
	if (tmp > tmp2)
	{
		while (n-- > 0)
			tmp[n] = tmp2[n];
	}
	else
	{
		while (i < n)
		{
			tmp[i] = tmp2[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(int argc, char **argv)
{
	int		i;
	int		a;

	(void)argc;
	i = 0;
	a = atoi(argv[3]);
	printf("%s", (char *)ft_memmove((void *)argv[1], 
	(const void *)argv[2], (size_t)atoi(argv[3])));
}*/