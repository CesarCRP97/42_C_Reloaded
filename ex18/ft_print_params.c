/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:51:33 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/21 15:29:14 by crubio-p         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (0);
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_print_param(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
