/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:59:35 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/23 19:51:21 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	void	*tmp;
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst)
	{
		tmp = ft_memalloc(content_size);
		if (tmp)
		{
			if (!content)
			{
				lst->content = NULL;
				lst->content_size = 0;
				lst->next = NULL;
				return (lst);
			}
			ft_memcpy(tmp, content, content_size);
			lst->content = tmp;
			lst->content_size = content_size;
			lst->next = NULL;
		}
		else
			return (tmp);
	}
	return (lst);
}
