/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:44:09 by skilic            #+#    #+#             */
/*   Updated: 2022/10/10 11:05:26 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *d, int l)
{
	int i;

	i = 0;
	while(d[i])
	{
		if (d[i] == (char)l)
		 return ((char*)(d + i));
		i++;
	}
	if (d[i] == (char)l)
		return ((char*)(d + i));
	else if (d!)
		return('\0');
}
