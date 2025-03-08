/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:45:19 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/08 14:27:25 by anbaltaz         ###   ########.fr       */
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
/*
int main()
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
	printf("string: %s\n", dest);
    ft_strcat(dest, src);
    printf("Concatenatenada string: %s\n", dest);
    
    return 0;
}
*/