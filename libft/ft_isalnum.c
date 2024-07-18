/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:39 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:17:44 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

// is it alphanumeric ?

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || ((65 <= c && c <= 90) || (97 <= c && c <= 122)))
		return (1);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", isalnum(argv[1][0]));
	return (0);
}*/