/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:49:39 by tatashir          #+#    #+#             */
/*   Updated: 2022/11/27 17:10:13 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*head;
	char const	*tail;
	char		*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	head = s1;
	tail = s1 + ft_strlen(s1) - 1;
	while (*head)
	{
		if (!ft_strchr(set, *head))
			break ;
		head++;
	}
	while (head < tail)
	{
		if (!ft_strchr(set, *tail))
			break ;
		tail--;
	}
	tail++;
	str = ft_substr(head, 0, tail - head);
	return (str);
}
