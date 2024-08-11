/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:23:03 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 20:23:16 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_solution(char **board, int n)
{
	int	i;
	int	k;

	i = 1;
	if (board[0][0] == '1')
		return ;
	board[0][0] = '1';
	while (i <= n)
	{
		k = 1;
		while (k <= n)
		{
			ft_putchar(board[i][k++]);
			if (k != n + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
