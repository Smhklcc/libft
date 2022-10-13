/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:42:23 by skilic            #+#    #+#             */
/*   Updated: 2022/10/12 13:01:43 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t count;
	size_t size;

	char *t;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	if (!(t = (char *)malloc((len + 1) * sizeof(char))))
		return(NULL);
	count = 0;
	while (count < len)
	{
		t[count] = s[start + count];
		count++;
	}
	t[count] = '\0';
	return (t);
}
