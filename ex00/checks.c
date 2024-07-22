/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:43:10 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:24 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *string)
{
	int	i;

	i = 0;
	while (i < 12)
	{
		if (string[i] == string[i + 4] && (string[i] != '2'))
		{
			write(1, "No hay solución. Pruebe otros números.\n", 57);
			return (0);
		}
		if ((string[i] == '4' && string[i + 4] != '1')
			|| string[i + 4] == '4' && string[i] != '1' || string[i] > '4'
			|| string[i + 4] > '4' || string[i] < '1' || string[i + 4] < '1')
		{
			write(1, "No hay solución. Pruebe otros números.\n", 57);
			return (0);
		}
		i++;
		if (i == 3)
			i = 8;
	}
	return (1);
}

int	check_repeated_rows(char matrix[4][4])
{
	if (matrix[0][0] == matrix[0][1] || matrix[0][0] == matrix[0][2]
	|| matrix[0][0] == matrix[0][3] || matrix[0][1] == matrix[0][2]
	|| matrix[0][1] == matrix[0][3] || matrix[0][2] == matrix[0][3])
		return (0);
	if (matrix[1][0] == matrix[1][1] || matrix[1][0] == matrix[1][2]
	|| matrix[1][0] == matrix[1][3] || matrix[1][1] == matrix[1][2]
	|| matrix[1][1] == matrix[1][3] || matrix[1][2] == matrix[1][3])
		return (0);
	if (matrix[2][0] == matrix[2][1] || matrix[2][0] == matrix[2][2]
	|| matrix[2][0] == matrix[2][3] || matrix[2][1] == matrix[2][2]
	|| matrix[2][1] == matrix[2][3] || matrix[2][2] == matrix[2][3])
		return (0);
	if (matrix[3][0] == matrix[3][1] || matrix[3][0] == matrix[3][2]
	|| matrix[3][0] == matrix[3][3] || matrix[3][1] == matrix[3][2]
	|| matrix[3][1] == matrix[3][3] || matrix[3][2] == matrix[3][3])
		return (0);
	return (1);
}

int	check_repeated_columns(char matrix[4][4])
{
	if (matrix[0][0] == matrix[1][0] || matrix[0][0] == matrix[2][0]
	|| matrix[0][0] == matrix[3][0] || matrix[1][0] == matrix[2][0]
	|| matrix[1][0] == matrix[3][0] || matrix[2][0] == matrix[3][0])
		return (0);
	if (matrix[0][1] == matrix[1][1] || matrix[0][1] == matrix[2][1]
	|| matrix[0][1] == matrix[3][1] || matrix[1][1] == matrix[2][1]
	|| matrix[1][1] == matrix[3][1] || matrix[2][1] == matrix[3][1])
		return (0);
	if (matrix[0][2] == matrix[1][2] || matrix[0][2] == matrix[2][2]
	|| matrix[0][2] == matrix[3][2] || matrix[1][2] == matrix[2][2]
	|| matrix[1][2] == matrix[3][2] || matrix[2][2] == matrix[3][2])
		return (0);
	if (matrix[0][3] == matrix[1][3] || matrix[0][3] == matrix[2][3]
	|| matrix[0][3] == matrix[3][3] || matrix[1][3] == matrix[2][3]
	|| matrix[1][3] == matrix[3][3] || matrix[2][3] == matrix[3][3])
		return (0);
	return (1);
}
