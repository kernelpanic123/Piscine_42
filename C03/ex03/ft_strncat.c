/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:19:09 by abtouait          #+#    #+#             */
/*   Updated: 2024/07/24 13:41:25 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (dest[i] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
/*int	main(void)
{
	char	nom1[20] = "b";
	char	nom2[20] = "ooooooooooooo";
	printf("%s", ft_strncat(nom1, nom2, 5));
}*/
