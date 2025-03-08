/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:23:46 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/08 14:05:53 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find && compare(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
        char *X = "Sera que da Vamos bem sucedido";
        char *Y = "Vamos";

        //printf("%s\n", ft_strstr(X, Y));
        printf("%s\n", strstr(X, Y));

	return(0);
}*/
