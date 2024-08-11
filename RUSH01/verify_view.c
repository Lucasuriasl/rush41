/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aaa.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:28:50 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 20:29:55 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_right_view(char **board, int n, int row)
{
	int		i;
	char	visible;
	char	max_height;

	i = n;
	visible = '1';
	max_height = board[row][i];
	while (i >= 1)
	{
		if (board[row][i] > max_height)
		{
			max_height = board[row][i];
			visible++;
		}
		i--;
	}
	return (board[row][n + 1] == visible);
}

int	verify_left_view(char **board, int n, int row)
{
	int		i;
	char	visible;
	char	max_height;

	i = 1;
	visible = '1';
	max_height = board[row][i];
	while (i <= n)
	{
		if (board[row][i] > max_height)
		{
			max_height = board[row][i];
			visible++;
		}
		i++;
	}
	if (board[row][0] == visible)
		return (verify_right_view(board, n, row));
	return (0);
}

int	verify_bottom_view(char **board, int n, int col)
{
	int		i;
	char	visible;
	char	max_height;

	i = n;
	visible = '1';
	max_height = board[i][col];
	while (i >= 1)
	{
		if (board[i][col] > max_height)
		{
			max_height = board[i][col];
			visible++;
		}
		i--;
	}
	return (board[n + 1][col] == visible);
}

int	verify_top_view(char **board, int n, int col)
{
	int		i;
	char	visible;
	char	max_height;

	i = 1;
	visible = '1';
	max_height = board[i][col];
	while (i <= n)
	{
		if (board[i][col] > max_height)
		{
			max_height = board[i][col];
			visible++;
		}
		i++;
	}
	if (board[0][col] == visible)
		return (verify_bottom_view(board, n, col));
	return (0);
}
