/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaksu <zaksu@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:28:16 by zaksu             #+#    #+#             */
/*   Updated: 2026/01/30 17:40:45 by zaksu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcl;
	size_t	destl;

	i = 0;
	srcl = 0;
	destl = 0;
	while (src[srcl] != '\0')
		srcl++;
	while (dst[destl] != '\0' && destl < size)
		destl++;
	if (destl == size)
		return (size + srcl);
	while (src[i] != '\0' && (destl + i + 1) < size)
	{
		dst[destl + i] = src[i];
		i++;
	}
	dst[destl + i] = '\0';
	return (destl + srcl);
}
