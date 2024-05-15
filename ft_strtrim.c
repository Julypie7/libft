/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:58 by ineimatu          #+#    #+#             */
/*   Updated: 2024/02/01 16:33:59 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_trim(const char *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		b;
	int		c;
	size_t	len;

	b = 0;
	c = ft_strlen(s1) - 1;
	if (!s1)
		return (0);
	else if ((!set) || (!*set) || (!*s1))
		return (ft_strdup(s1));
	while (ft_trim(set, s1[b]))
		b++;
	while (ft_trim(set, s1[c]))
		c--;
	len = c - (b - 1);
	if ((len <= 0) || (b >= (int)ft_strlen(s1)))
		return (ft_strdup(""));
	return (ft_substr(s1, b, len));
}
/*
int	main(void)
{
	char const str1[41] = "ababsdjfkbabalejbabaabba";
	char const seb[3] = "ab";
	printf("%s", ft_strtrim(str1,seb));
	return (0);
}*/
