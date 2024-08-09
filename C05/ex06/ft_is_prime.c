/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:48:41 by abtouait          #+#    #+#             */
/*   Updated: 2024/08/06 13:17:53 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 1)
		return (0);
	if (nb == 0)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i--;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d",ft_is_prime(3));
}*/
