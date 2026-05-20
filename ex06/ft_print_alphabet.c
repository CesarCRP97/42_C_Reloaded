/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:39:30 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/19 14:07:19 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	actual_letter;

	actual_letter = 'a';
	while (actual_letter <= 'z')
	{
		ft_putchar(actual_letter);
		actual_letter++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }