/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:36:38 by dchiche           #+#    #+#             */
/*   Updated: 2017/11/07 16:28:58 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int x;
	int res;

	x = 0;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		while (x < nb)
		{
			res = res * (nb - x);
			x++;
		}
		return (res);
	}
}
