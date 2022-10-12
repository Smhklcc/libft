/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skilic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:59:13 by skilic            #+#    #+#             */
/*   Updated: 2022/10/11 12:31:37 by skilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int norp;
	int result;
	
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r'||str[i] == ' ') 
		i++;
	norp = (str[i] == '-') ? -1 : 1;
	if (norp == -1 || str[i] == '+')
	i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	result = (result * 10) + (str[i++] - '0');
	return (result * norp);
}
int main()
{
	char s[] ="  --+1234567";
	printf("%d", ft_atoi(s));
}
