/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:43:10 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:24 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check(char *string);
char	*clean_input(char *inputstring);
void	fill_hints(char matrix[4][4], char *string);
void	ft_print_array2d(char array[4][4]);

int	main(int ac, char **inputstring)
{
	char	matrix[4][4];
	int	valid_input;
	char	*string;

	if (ac != 2)
	{
		write(1, "Faltan o sobran argumentos.\n", 29);
		return (1);
	}
	string = clean_input(inputstring[1]);
	if (string == NULL)
	{
		write(1, "Tiene que haber 16 valores en el input string.\n", 48);
		return (1);
	}
	valid_input = check(string);
	if (!valid_input)
	{
		write(1, "El input string no es válido.\n", 32);
		free(string);
		return (1);
	}
	fill_hints(matrix, string);
	ft_print_array2d(matrix);
	return (0);
}
