/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:43:10 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:24 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array2d(char array[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (array[i][j] != '1' && array[i][j] != '2'
			&& array[i][j] != '3' && array[i][j] != '4')
				array[i][j] = ' ';
			write(1, &array[i][j], 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
