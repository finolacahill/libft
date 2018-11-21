/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcahill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:25:10 by fcahill           #+#    #+#             */
/*   Updated: 2018/11/21 16:28:17 by fcahill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *newcontent, size_t content_size)
{
	t_list *newlist;

	if (!(newlist = (t_list *)(malloc(sizeof(t_list)))))
		return (NULL);
	if (newcontent == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
		return (newlist);
	}
	if (!(newlist->content = (void*)(malloc(content_size))))
	{
		free(newlist);
		return (NULL);
	}
	ft_strcpy(newlist->content, newcontent);
	newlist->next = NULL;
	return (newlist);
}
