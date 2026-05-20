/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:29:01 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/19 13:36:02 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	actual_digits;

	actual_digits = '0';
	while (actual_digits <= '9')
	{
		ft_putchar(actual_digits);
		actual_digits++;
	}
}
