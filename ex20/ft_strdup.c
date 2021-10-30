/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:22:29 by pwaters           #+#    #+#             */
/*   Updated: 2021/10/29 16:48:28 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc (ft_strlen(src) * char);
	while (src[i] != '\0')
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}

