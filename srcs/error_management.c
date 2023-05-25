/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:44:52 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/25 20:10:46 by hvercell         ###   ########.fr       */
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
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			++test;
		}
	}
	while (*test != '\0')
	{
		if (ft_isdigit(*test) == 0)
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		++test;
	}
}
