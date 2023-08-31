/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:53:54 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/22 20:52:06 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb < 2)
		return (0);
	if (nb == 3 || nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	div = 3;
	while (nb % div != 0 && nb / div > div)
		div = div + 2;
	if (nb / div <= div && nb % div != 0)
		return (1);
	return (0);
}
