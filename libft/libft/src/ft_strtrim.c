/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:36:49 by skilic            #+#    #+#             */
/*   Updated: 2022/10/12 13:54:12 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t l;

	char *res;
    l = 0;
	while (*s1 && ft_strchr(set, s1[l - 1]) !=0)
		l--;
	if (!(res = (char *)malloc(sizeof(char) * (l + 1))))
		return (0);
	ft_memcpy(res, s1, l);
	res[l] = '\0';
	return (res);
}
