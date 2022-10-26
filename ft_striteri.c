/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:24:22 by tatashir          #+#    #+#             */
/*   Updated: 2022/10/26 14:13:24 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_striteri(char *s, void (*f)(unsigned int, char *))
// {
// 	unsigned int	i;

// 	if (s == NULL || f == NULL)
// 		return ;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		(*f)(i, &s[i]);
// 		i++;
// 	}
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}