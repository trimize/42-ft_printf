/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:25:18 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 18:47:26 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//deletes and frees the lst node

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
		(del(lst->content), free(lst));
}
