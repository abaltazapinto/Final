/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:33:55 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/08 12:20:54 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	k;

	x = 0;
	k = 0;
	while (dest[x] != '\0' )
	{
		x++;
	}
	while (src[k] != '\0')
	{
		dest[x] = src[k];
		x++;
		k++;
	}
	dest[x] = '\0';
	return (dest);
}

//#include <stdio.h>
/*
int main()
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
    printf("Antes de ft_strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("Depois de ft_strcat: %s\n", dest);

    return 0;
}*/
