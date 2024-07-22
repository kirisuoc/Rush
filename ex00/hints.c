/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hints.c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:43:10 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:24 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	asign_colup(char matrix[4][4], char *string)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (string[i] == '4')
		{
			matrix[0][i] = '1';
			matrix[1][i] = '2';
			matrix[2][i] = '3';
			matrix[3][i] = '4';
		}
		else if (string[i] == '1')
		{
			matrix[0][i] = '4';
		}
		i++;
	}
}

void	asign_coldown(char matrix[4][4], char *string)
{
	int	i;
	int	k;
	int	j;

	i = 3;
	k = 4;
	j = 0;
	while (i >= 0)
	{
		if (string[k] == '4')
		{
			matrix[0][i] = '4';
			matrix[1][i] = '3';
			matrix[2][i] = '2';
			matrix[3][i] = '1';
		}
		else if (string[k] == '1')
		{
			matrix[3][j] = '4';
		}
		i--;
		j++;
		k++;
	}
}

void	asign_rowleft(char matrix[4][4], char *string)
{
	int	i;
	int	k;

	i = 0;
	k = 8;
	while (i < 4)
	{
		if (string[k] == '4')
		{
				matrix[i][0] = '1';
				matrix[i][1] = '2';
				matrix[i][2] = '3';
				matrix[i][3] = '4';
		}
		else if (string[k] == '1')
		{
			matrix[i][0] = '4';
		}
			i++;
			k++;
	}
}

void	asign_rowright(char matrix[4][4], char *string)
{
	int	i;
	int	k;
	int	j;

	i = 3;
	k = 12;
	j = 0;
	while (i >= 0)
	{
		if (string[k] == '4')
		{
			matrix[j][3] = '1';
			matrix[j][2] = '2';
			matrix[j][1] = '3';
			matrix[j][0] = '4';
		}
		else if (string[k] == '1')
		{
			matrix[j][3] = '4';
		}
		i--;
		j++;
		k++;
	}
}

void	fill_hints(char matrix[4][4], char *string)
{
	asign_colup(matrix, string);
	asign_coldown(matrix, string);
	asign_rowleft(matrix, string);
	asign_rowright(matrix, string);
}
