/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:35:30 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/30 14:46:14 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int ft_iterative_factorial(int nb);

int main(void)
{
	ft_putstr("\nFact(-4) = \n");
	ft_putnbr(ft_iterative_factorial(-4));
	ft_putstr("\nFact(0) = \n");
	ft_putnbr(ft_iterative_factorial(0));
	ft_putstr("\nFact(12) = \n");
	ft_putnbr(ft_iterative_factorial(12));
	ft_putstr("\nFact(13) = \n");
	ft_putnbr(ft_iterative_factorial(13));
}

