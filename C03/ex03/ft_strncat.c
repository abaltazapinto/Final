/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:15:45 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/08 12:28:07 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	k;

	x = 0;
	k = 0;
	while (dest[x])
	{
		x++;
	}
	while (k < nb && src[k])
	{
		dest[x + k] = src[k];
		k++;
	}
	dest[x + k] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "O que diz esquina";
	char dest[] = "Deu";
			
	printf(" funcao criada por mim : %s", ft_strncat(dest,src, 65));
	char src1[] = "O que diz esquina";
    char dest1[] = "Deu";

	printf("\n funcao : %s", strncat(dest1,src1, 60));
	return (0);
}*/
