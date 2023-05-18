/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:44:52 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/18 17:15:41 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	not_digit(char *test)
{

	if ((*test == '+' || *test == '-'))
	{
		++test;
		while (*test != '\0')
		{
			if (ft_isdigit(*test) == 0)
			{
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
			++test;
		}
	}
	while (*test != '\0')
	{
		if (ft_isdigit(*test) == 0)
		{
			ft_printf("Error\n");
			exit(EXIT_FAILURE);
		}
		++test;
	}
}
