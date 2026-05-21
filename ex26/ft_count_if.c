/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:58:07 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/21 16:12:01 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
