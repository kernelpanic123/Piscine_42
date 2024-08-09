/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:01:33 by abtouait          #+#    #+#             */
/*   Updated: 2024/08/02 12:50:47 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	_putchar(char c)
{
	write(1, &c, 1);
}

void	_putnbr(int nb)
{
	if (nb > 9)
	{
		_putnbr(nb / 10);
	}
	_putchar(nb % 10 + '0');
}

int	main(void)
{
	_putnbr(3994);
}
