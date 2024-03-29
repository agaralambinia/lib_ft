/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:12:54 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 19:13:57 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == (char)c)
			return ((char *)s - 1);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
Аргументы:
s – указатель на строку, в которой будет осуществляться поиск.
c – код искомого символа.

Возвращаемое значение:
Указатель на искомый символ, если он найден в строке s, иначе NULL.

Описание:
Функция strchr ищет первое вхождения символа, код которого указан в аргументе c,
в строке, на которую указывает аргумент s.
*/
/*
#include <stdio.h>
int	main()
{
	char s[] = "ft_strchr";
	printf("t_strchr %s\n", ft_strchr(s, 't'));
	printf("NULL %s\n", ft_strchr(s, 'o'));
}
*/