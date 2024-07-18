/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:57:13 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 18:42:05 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//is it part of the ascii table ?

int	ft_isascii(int c)
{
	if ((0 <= c && c <= 127))
		return (1);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", isascii(argv[1][0]));
	return (0);
}*/