/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echeang <echeang@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:56:33 by echeang           #+#    #+#             */
/*   Updated: 2023/03/26 18:02:15 by echeang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y, int i, int j)
{
	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (j == 1 || i == y || i == 1 || j == x)
			{
				if ((i == 1 && j == 1) || (i == 1 && j == x))
					ft_putchar(65);
				else if ((i == y && j == 1) || (i == y && j == x))
					ft_putchar(67);
				else
					ft_putchar(66);
			}
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
