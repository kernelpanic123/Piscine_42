/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:44:44 by abtouait          #+#    #+#             */
/*   Updated: 2024/07/23 09:27:34 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main(void)
{
	int e = 0;
	int r = 200;
	printf("%d, %d", e, r);
	ft_swap(&e, &r);
	printf(" %d, %d", e, r);
	return 0;
}
*/
