/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:31:00 by abtouait          #+#    #+#             */
/*   Updated: 2024/07/30 16:44:46 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	o;

	o = 1;
	while (o < argc)
	{
		i = 0;
		while (argv[o][i] != '\0')
		{
			write(1, &argv[o][i], 1);
			i++;
		}
		o++;
		write(1, "\n", 1);
	}
}
