/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:35:46 by exam              #+#    #+#             */
/*   Updated: 2019/07/16 10:01:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = 0;
	while (str[len] != '\0')
		len++; // computing length of string, but watch out, now str[len] would be '\0'
	len--; // so that str[len] = last char, not the null char
	i = 0;
	while (i < len) // you want to stop swapping once i has reached middle of string
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
