/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:54:06 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/21 02:37:51 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	bg;
	size_t	sm;

	bg = ft_strlen(haystack);
	sm = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (*haystack != *needle)
			haystack++;
		else if (!ft_memcmp(haystack, needle, len) && bg >= sm)
		{
			if ((ft_memcmp(haystack, needle, sm) || sm > len) && bg != sm)
				return (NULL);
			return ((char *)haystack);
		}
	}
	return (NULL);
}
