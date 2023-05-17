/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:01:24 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/17 19:38:40 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		idx;
	t_stack	stack;

	idx = 0;
	stack.size = argc - 1;
	stack.idx_a = 0;
	char_to_int(argv, &stack);
	idx = 0;
	while (idx < stack.size)
	{
		printf("%i	", stack.data[idx]);
		++idx;
	}
	printf("\n");
	pre_sort(&stack);
	idx = 0;
	while (idx < stack.size)
	{
		printf("%i	", stack.data[idx]);
		++idx;
	}
	printf("\n");
	reverse_rotate_a(&stack);
	idx = 0;
	while (idx <= stack.size - 1)
	{
		printf("%i	", stack.data[idx]);
		++idx;
	}
	printf("\n");
	free(stack.data);
}
