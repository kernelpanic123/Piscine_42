/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:50:32 by abtouait          #+#    #+#             */
/*   Updated: 2024/07/24 17:06:23 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (dest[i] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
/*int	main(void)
{
	char	nom1[20] = "test";
	char	nom2[20] = "blabloo";
	printf("%s", ft_strcat(nom1, nom2));
	
}*/
