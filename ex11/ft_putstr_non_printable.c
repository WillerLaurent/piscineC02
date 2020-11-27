/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:29:27 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/16 11:34:02 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	d;
	char			*tab_hexa;

	tab_hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		d = str[i];
		if (str[i] > 31 && str[i] < 127)
		{
			ft_write_char(str[i]);
		}
		else
		{
			ft_write_char('\\');
			ft_write_char(tab_hexa[d / 16]);
			ft_write_char(tab_hexa[d % 16]);
		}
		i++;
	}
}
