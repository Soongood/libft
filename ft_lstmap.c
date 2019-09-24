/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:46:31 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/24 14:48:42 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	int		sign;
	t_list	*tmp;
	t_list	*head;

	sign = 0;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if ((tmp = f(lst)))
		{
			if (!sign)
			{
				head = tmp;
				sign = -1;
			}
			else
				head = ft_lstaddback(head, tmp);
			lst = lst->next;
			tmp = tmp->next;
		}
		else
			return (NULL);
	}
	return (head);
}
