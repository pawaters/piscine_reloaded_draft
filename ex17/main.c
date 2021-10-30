/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:43:11 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/29 14:28:03 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft.h"

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	ft_putstr("\nResult of ft_putnbr:\n");
	ft_putnbr(451);
	ft_putstr("\nResult of ft_strcmp:\n");
	ft_putnbr(ft_strcmp("hello", "world"));
	ft_putstr("\nResult of strcmp:\n");
	ft_putnbr(strcmp("hello", "world"));
}

