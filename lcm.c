/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:29:27 by exam              #+#    #+#             */
/*   Updated: 2019/07/09 10:12:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	a_cpy;
	unsigned int	b_cpy;

	a_cpy = a;
	b_cpy = b;

	if (a > 0 && b > 0)
	{	
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		return (a_cpy * b_cpy / a);
	}
	else
		return (0);
}
