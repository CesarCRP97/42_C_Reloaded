/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:02:01 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/20 12:58:03 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_param(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	int	aux_a;

	aux_a = *a;
	*a = *b;
	*b = aux_a;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int num_of_params, char **params)
{
	int	i;
	int	ordenados;

	i = 0;
	ordenados = 0;
	while (ordenados < num_of_params)
	{
		i = 0;
		while (i < (num_of_params - ordenados) && (i + 1) < num_of_params)
		{
			if (ft_strcmp(params[i], params[i + 1]) > 0)
			{
				ft_swap(&params[i], &params[i + 1]);
			}
			i++;
		}
		ordenados++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_sort_params(argc - 1, &argv[1]);
		i = 1;
		while (i < argc)
		{
			ft_print_param(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
