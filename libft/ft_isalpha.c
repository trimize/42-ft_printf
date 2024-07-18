/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:08:39 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:17:51 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//is it a letter ?

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", isalpha(argv[1][0]));
	return (0);
}*/