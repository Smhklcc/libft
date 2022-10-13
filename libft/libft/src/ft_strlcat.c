/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:52:38 by skilic            #+#    #+#             */
/*   Updated: 2022/10/10 15:00:14 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t c;

	size_t d;

	if (dsize <= ft_strlen(dst))
		return (dsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != 0 && c + 1 < dsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
