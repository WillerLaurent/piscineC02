/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:53:59 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/17 13:54:20 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char c)
{
	if (c < 'a' || c > 'z')
		if (c < 'A' || c > 'Z')
			if (c < '0' || c > '9')
				return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!ft_str_is_alpha(str[i - 1]))
				str[i] = str[i] - 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (ft_str_is_alpha(str[i - 1]))
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
