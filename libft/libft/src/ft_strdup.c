/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:18:46 by skilic            #+#    #+#             */
/*   Updated: 2022/10/11 14:26:32 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *s2;
	size_t strl;

	strl = ft_strlen(s) + 1;
	if ((s2 = malloc(strl)))
	{
		ft_strlcpy(s2, s, strl);
		return(s2);
	}
	return (NULL);
}
