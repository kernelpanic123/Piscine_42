/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:04:55 by abtouait          #+#    #+#             */
/*   Updated: 2024/08/06 15:18:03 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		a = nb * a;
		nb--;
	}
	return (a);
}
/*int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
