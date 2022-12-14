/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:16:27 by skilic            #+#    #+#             */
/*   Updated: 2022/10/10 10:27:53 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_toupper(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		alpha -= 32;
	return(alpha);
}
