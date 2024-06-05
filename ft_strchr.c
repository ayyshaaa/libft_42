/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aistierl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:29:00 by aistierl          #+#    #+#             */
/*   Updated: 2024/05/30 13:43:56 by aistierl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int			i;
	char					*result;
	unsigned char			character;

	result = (char *)s;
	character = (unsigned char) c;
	if (character == '\0')
		return (result + ft_strlen(s));
	else
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			if (result[i] == character)
				return (result + i);
			i++;
		}
		return (NULL);
	}
}
