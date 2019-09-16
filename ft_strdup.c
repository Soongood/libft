/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:12:08 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/12 20:48:21 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *string;

	string = (char*)malloc(sizeof(*string) * (ft_strlen(s) + 1));
	if (string)
	{
		ft_strcpy(string, s);
		return (string);
	}
	else
		return (NULL);
}
