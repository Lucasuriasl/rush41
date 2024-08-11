/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_row_column2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:21:38 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 20:21:56 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	in_row(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < col)
		if (board[row][i++] == digit + '0')
			return (1);
	return (0);
}

int	in_column(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < row)
		if (board[i++][col] == digit + '0')
			return (1);
	return (0);
}
