/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:27:30 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/30 11:42:44 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	if (length <= 0)
		return ;
	while (i < length)
		(*f)(tab[i++]);
}

