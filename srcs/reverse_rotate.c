/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:55:49 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/18 10:27:01 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack *stack)
{
	int	a;
	int	b;

	a = stack->size - 1;
	b = a - 1;
	while (b >= stack->idx_a)
	{
		stack->data[a] ^= stack->data[b];
		stack->data[b] ^= stack->data[a];
		stack->data[a] ^= stack->data[b];
		--a;
		--b;
	}
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack *stack)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (b < stack->idx_a)
	{
		stack->data[b] ^= stack->data[a];
		stack->data[a] ^= stack->data[b];
		stack->data[b] ^= stack->data[a];
		++a;
		++b;
	}
	ft_printf("rrb\n");
}

void	reverse_rotate_a_b(t_stack *stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
	ft_printf("rrr\n");
}
