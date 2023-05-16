/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:01:24 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/16 17:30:54 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*data;
	int		idx;
	t_stack	stack;

	idx = 0;
	stack.size = argc - 1;
	data = char_to_int(argv, &stack);
	while (idx <= stack.size - 1)
	{
		printf("%i	", data[idx]);
		++idx;
	}
	printf("\n");
	data = pre_sort(data, &stack);
	idx = 0;
	while (idx <= stack.size - 1)
	{
		printf("%i	", data[idx]);
		++idx;
	}
	printf("\n");
}
