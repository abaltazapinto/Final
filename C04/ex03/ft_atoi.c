/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:26:43 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/08 14:51:21 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int res;
	int sign;
	
	res = 0;
	sign = 1;
	while(*str == 32 || *str >= 9 && *str <= 13)
	{
		str++;
	}
	while(*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign *= -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("Atoi of the exercise: %d ", ft_atoi(" ---+--+1234ab567\n"));
	printf("Atoi: %d ", atoi(" ---+--+1234ab567\n"));
	return (0);
}*/
