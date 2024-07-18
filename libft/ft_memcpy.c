/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:36:09 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 18:56:11 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

//copies n bytes from memory area src to memory area dest
//memory cannot overlap or it'll return dumb stuff

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < (int)n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
