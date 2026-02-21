/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaksu <zaksu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:27:26 by zaksu             #+#    #+#             */
/*   Updated: 2026/01/31 16:11:17 by zaksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			charc;
	char			*last;

	charc = (char) c;
	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == charc)
			last = ((char *) &s[i]);
		i++;
	}
	if (s[i] == charc)
		last = ((char *) &s[i]);
	return (last);
}
