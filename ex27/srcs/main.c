/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:12:32 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/30 12:25:37 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
	int		file_descriptor;
	char	buf;

	if (argc == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.");
	else
	{
		file_descriptor = open(argv[1], O_RDONLY);
		while (read(file_descriptor, &buf, 1) != '\0')
		{
			write(1, &buf, 1);
		}
		close(file_descriptor);
	}
	return (0);
}

	
