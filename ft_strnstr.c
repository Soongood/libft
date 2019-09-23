/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:54:06 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/23 18:21:37 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	bg;
	size_t	sm;

	bg = ft_strlen(hay);
	sm = ft_strlen(needle);
	if (!*needle)
		return ((char *)hay);
	while (*hay && len--)
	{
		if (*hay != *needle)
			hay++;
		else if (!ft_memcmp(hay, needle, len) && bg >= sm)
		{
			if ((ft_memcmp(hay, needle, sm) || sm > len) && bg != sm)
				return (NULL);
			return ((char *)hay);
		}
	}
	return (NULL);
}
