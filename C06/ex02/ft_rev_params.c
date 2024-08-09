/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:28:42 by abtouait          #+#    #+#             */
/*   Updated: 2024/07/29 20:28:42 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	o;

	o = argc - 1;
	while (o > 0)
	{
		i = 0;
		while (argv[o][i] != '\0')
		{
			write(1, &argv[o][i], 1);
			i++;
		}
		o--;
		write(1, "\n", 1);
	}
	return (0);
}
