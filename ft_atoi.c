/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reddamss <reddamss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:49 by reddamss          #+#    #+#             */
/*   Updated: 2024/06/12 15:44:19 by reddamss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str, t_stack *a, char **res)
{
	long long	number;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i++] - 48;
	}
	if((number * sign) > 2147483647 || (number * sign) < -2147483648)/////// remember to ask if we should include the -2...48
	{
		free(a->array);
		free(a);
		destroy_res(res);
		ft_putstr_fd("Error max int",2);
	}
	return (number * sign);
}
