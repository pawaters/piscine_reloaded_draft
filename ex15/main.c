/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:35:30 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/31 11:46:14 by paw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int ft_sqrt(int nb);

int main(void)
{
	ft_putstr("\nf(-4) = \n");
	ft_putnbr(ft_sqrt(-4));
	ft_putstr("\nf(0) = \n");
	ft_putnbr(ft_sqrt(0));
	ft_putstr("\nf(1) = \n");
	ft_putnbr(ft_sqrt(1));
	ft_putstr("\nf(4) = \n");
	ft_putnbr(ft_sqrt(4));
	ft_putstr("\nf(16) = \n");
	ft_putnbr(ft_sqrt(16));
	ft_putstr("\nf(2147395600) = \n");
	ft_putnbr(ft_sqrt(2147395600));
	ft_putstr("\nf(2147483646) = \n");
	ft_putnbr(ft_sqrt(2147483646));
}

