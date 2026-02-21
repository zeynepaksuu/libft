/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaksu <zaksu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:25:38 by zaksu             #+#    #+#             */
/*   Updated: 2026/01/31 13:44:44 by zaksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			charc;

	charc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == charc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == charc)
		return ((char *) &s[i]);
	return (NULL);
}
