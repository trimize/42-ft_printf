/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:34:58 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:18:02 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

//is it a digit ??

int	ft_isdigit(int c)
{
	if ((48 <= c && c <= 57))
		return (1);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", isdigit(argv[1][0]));
	return (0);
}*/