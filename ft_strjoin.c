/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcahill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:29:34 by fcahill           #+#    #+#             */
/*   Updated: 2018/11/21 16:56:14 by fcahill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((!s1) || (!s2))
		return (0);
	if (!(fresh = malloc(sizeof(char) * (ft_strlen(s1)
						+ ft_strlen((char *)s2)))))
		return (NULL);
	while (s1[i] != '\0')
	{
		fresh[i] = s1[i];
		++i;
	}
	while (s2[j] != '\0')
	{
		fresh[i] = s2[j];
		++j;
		++i;
	}
	fresh[i] = '\0';
	return (fresh);
}
