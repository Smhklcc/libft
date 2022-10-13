/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:46:50 by skilic            #+#    #+#             */
/*   Updated: 2022/10/10 14:05:52 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *ptr, int c, size_t n)
{
	unsigned char *dizi;

	size_t	i;

	dizi = (unsigned char*)ptr;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (dizi[i] == c)
			return ((void *)dizi + i);
		i++;
	}
	return (0);
}
