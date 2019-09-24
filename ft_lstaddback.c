/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:24:16 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/24 14:46:30 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstaddback(t_list *head, t_list *elem)
{
	t_list *ptr;

	if (!head || !elem)
		return (NULL);
	ptr = head;
	while (head->next)
		head = head->next;
	head->next = elem;
	return (ptr);
}
