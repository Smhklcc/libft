/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:15:55 by skilic            #+#    #+#             */
/*   Updated: 2022/10/06 17:09:45 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char dizi[] = "Merhaba";
	ft_bzero(dizi, 7);
	printf("dizi içeriği: %s",dizi);
	return (0);
}