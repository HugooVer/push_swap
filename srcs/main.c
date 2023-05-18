/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:01:24 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/18 17:23:13 by hvercell         ###   ########.fr       */
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
		ft_printf("%i	", stack.data[idx]);
		++idx;
	}
	ft_printf("\n");
	pre_sort(&stack);
	idx = 0;
	while (idx < stack.size)
	{
		ft_printf("%i	", stack.data[idx]);
		++idx;
	}
	ft_printf("\n");
	reverse_rotate_a(&stack);
	idx = 0;
	while (idx <= stack.size - 1)
	{
		ft_printf("%i	", stack.data[idx]);
		++idx;
	}
	ft_printf("\n");
	free(stack.data);
}
