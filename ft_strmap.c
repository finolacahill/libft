/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcahill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:47:12 by fcahill           #+#    #+#             */
/*   Updated: 2018/11/21 17:12:05 by fcahill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*temp;
	int		i;

	i = 0;
	if ((!s) || (!f))
		return (0);
	if (!(temp = malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		temp[i] = f(s[i]);
		++i;
	}
	temp[i] = '\0';
	return (temp);
}
