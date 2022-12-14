/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:52:13 by isitbon           #+#    #+#             */
/*   Updated: 2022/08/01 23:13:00 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != (i * i) && i <= 46340)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
