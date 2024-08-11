/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-e- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:16:23 by llima-e-          #+#    #+#             */
/*   Updated: 2024/08/11 20:16:30 by llima-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int n, char **conds);

int		verify_params(int n, char **argv);

void	print_error(void);

char	**create_conds(int n, char *str);

int	main(int argc, char **argv)
{
	int		dim;
	char	**conds;

	dim = verify_params(argc, argv);
	conds = create_conds(dim, argv[1]);
	if (!dim || argc != 2)
		print_error();
	else
		rush(dim, conds);
	return (0);
}
