/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:39:51 by skilic            #+#    #+#             */
/*   Updated: 2022/10/05 15:44:31 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int b)
{
	if (b >= 'A' && b <= 'Z')
	return(1);
	else if (b >= 'a' && <= 'z')
	return (1);
	else if (b >= '0' && <= '9')
	return(1);
	else
	return (0);
}
