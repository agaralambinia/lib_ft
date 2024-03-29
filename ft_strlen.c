/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:34:21 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 18:34:22 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
Вычисляет количество символов в строке до первого вхождения символа конца строки.
При этом символ конца строки не входит в подсчитанное количество символов.
*/
/*
#include <stdio.h>
int	main()
{
	printf("0 %zu\n", ft_strlen(""));
	printf("3 %zu\n", ft_strlen("123"));
	printf("10 %zu\n", ft_strlen("1234567890"));
}
*/