/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:32:29 by skilic            #+#    #+#             */
/*   Updated: 2022/10/10 13:40:55 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;
	char *dst;

	tmp = (char*)src;
	dst = (char*)dest;

	if (tmp > dst)
	{
		while(n--)
		{
			tmp[n] = dst[n];
		}
	}
	else
		ft_memcpy(dst, tmp, n);
	return (dst);
}
