/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:56:10 by ineimatu          #+#    #+#             */
/*   Updated: 2024/02/01 15:36:48 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	e;

	e = 0;
	while (s[e] != '\0')
		e++;
	return (e);
}
/*
int main()
{
	char s[] = "Abracaadabra";
	printf ("%zu\n", ft_strlen(s));
	printf ("%zu\n", strlen(s));
	return (0);
}
*/
