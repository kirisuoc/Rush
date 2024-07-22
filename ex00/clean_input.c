/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:43:10 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:24 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*clean_input(char *inputstring)
{
	int	i;
	int	j;
	int	len;
	char	*cleanstring;

	i = 0;
	j = 0;
	cleanstring = (char *)malloc(17);
	len = ft_strlen(inputstring);
	if (len != 31)
		return (NULL);
	if (cleanstring == NULL)
		return (NULL);
	while (inputstring[i] != '\0' && j < 16)
	{
		if (i % 2 == 0)
		{
			cleanstring[j] = inputstring[i];
			j++;
		}
		i++;
	}
	cleanstring[16] = '\0';
	return (cleanstring);
}
