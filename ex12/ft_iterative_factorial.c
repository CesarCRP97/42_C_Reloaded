/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:08:53 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/20 10:24:18 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	actual_result;

	actual_result = 1;
	while (nb != 0)
	{
		actual_result = actual_result * nb;
		nb--;
	}
}
