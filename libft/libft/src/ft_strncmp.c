/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:32:22 by skilic            #+#    #+#             */
/*   Updated: 2022/10/10 12:19:48 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *d1, const char *d2, size_t n)
{
	size_t i;

	if (n == 0)
	return (0);
	
	i = 0;
	while (d1[i] && d2[i] && d1[i] == d2[i] && i < n - 1)
		i++;
	return((unsigned char)d1[i] - (unsigned char)d2[i]);
}
