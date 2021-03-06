/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:43:11 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/31 12:24:42 by paw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft.h"

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	ft_putstr("\nResult of ft_strcmp:\n");
	ft_putnbr(ft_strcmp("hello", "hello"));
	ft_putstr("\nResult of strcmp:\n");
	ft_putnbr(strcmp("hello", "hello"));
	ft_putstr("\nResult of ft_strcmp:\n");
	ft_putnbr(ft_strcmp("hellb", "hella"));
	ft_putstr("\nResult of strcmp:\n");
	ft_putnbr(strcmp("hellb", "hella"));
	ft_putstr("\nResult of ft_strcmp:\n");
	ft_putnbr(ft_strcmp("hellz", "hella"));
	ft_putstr("\nResult of strcmp:\n");
	ft_putnbr(strcmp("hellz", "hella"));
}

