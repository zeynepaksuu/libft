/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaksu <zaksu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:06:05 by zaksu             #+#    #+#             */
/*   Updated: 2026/01/31 19:11:49 by zaksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*way;
	unsigned char	who;
	size_t			i;

	way = (unsigned char *)s;
	who = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (way[i] == who)
		{
			return ((void *)(way + i));
		}
		i++;
	}
	return (NULL);
}
