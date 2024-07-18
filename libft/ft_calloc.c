/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:28:01 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 18:40:47 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*#include <stdio.h>
#define SIZE_MAX              (18446744073709551615UL)*/

//malloc but the memory is set to 0

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (((nmemb * size) > 2147483647) || (nmemb > 2147483647 && size != 0)
		|| (size > 2147483647 && nmemb != 0))
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	ft_memset(p, 0, nmemb * size);
	return (p);
}

/*int	main(void)
{
	size_t	a;
	size_t	b;
	void	*s;

	a = 65535;
	b = 0;
	s = ft_calloc(0, -5);
	return (0);
}*/