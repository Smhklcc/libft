/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:45:24 by skilic            #+#    #+#             */
/*   Updated: 2022/10/11 14:03:28 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr=malloc(count * size);
	if (ptr == 0)
        return (0);
	ft_bzero(ptr, count * size);
	return(ptr);
}
