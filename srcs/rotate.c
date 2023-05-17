/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:42:33 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/17 19:31:33 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	a;
	int	b;

	a = stack->idx_a;
	b = a + 1;
	while (b < stack->size)
	{
		stack->data[b] ^= stack->data[a];
		stack->data[a] ^= stack->data[b];
		stack->data[b] ^= stack->data[a];
		++a;
		++b;
	}
	ft_printf("ra\n");
}

void	rotate_b(t_stack *stack)
{
	int	a;
	int	b;

	a = stack->idx_a - 1;
	b = a - 1;
	while (b >= 0)
	{
		stack->data[a] ^= stack->data[b];
		stack->data[b] ^= stack->data[a];
		stack->data[a] ^= stack->data[b];
		--a;
		--b;
	}
	ft_printf("rb\n");
}

void	rotate_a_b(t_stack *stack)
{
	rotate_a(stack);
	rotate_b(stack);
	ft_printf("rr\n");
}
