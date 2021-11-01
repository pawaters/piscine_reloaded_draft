/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:43:11 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/31 13:28:51 by paw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft.h"

int	*ft_range(int min, int max);

void	ft_puttab(int* tab)
{
	int i;

	i = 0;
	while (i < 10)
		ft_putnbr(tab[i++]);
	ft_putstr("\n");
}

int main(void)
{
	int i;
	int *tab1;
	int *tab2;
	int *tab3;
	int *tab4;

	i = 0;
	tab1 = ft_range(-9,0);
	tab2 = ft_range(-4,4);
	tab3 = ft_range(0,9);
	tab4 = ft_range(9,0);
	ft_puttab(tab1);
	ft_puttab(tab2);
	ft_puttab(tab3);

}

