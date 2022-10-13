/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:01:12 by skilic            #+#    #+#             */
/*   Updated: 2022/10/13 10:37:54 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t i;
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char*)ptr1;
	s2 = (unsigned char*)ptr2;

	if (!n)
		return (0);
	i = 0;
	while (i++ < n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
    return ((int)(*s1 - *s2));
}
