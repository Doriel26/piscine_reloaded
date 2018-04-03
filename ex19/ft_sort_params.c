/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:24:21 by dchiche           #+#    #+#             */
/*   Updated: 2017/11/07 16:30:34 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int ac, char **av)
{
	int		a;
	char	*t;

	a = 0;
	while (a < ac - 1)
	{
		if (ft_strcmp(av[a], av[a + 1]) > 0)
		{
			t = av[a];
			av[a] = av[a + 1];
			av[a + 1] = t;
			a = -1;
		}
		a++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	ft_sort_params(ac - 1, av + 1);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
