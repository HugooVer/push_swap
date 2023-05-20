/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:06:39 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/20 12:45:42 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *s)
{
	if (s->data[0] > s->data[1])
	{
		if (s->data[0] > s->data[2])
		{
			if (s->data[2] > s->data[1])
				rotate_a(s); // 201
			else
			{
				swap_a(s);
				reverse_rotate_a(s); // 210
			}
		}
		else
			swap_a(s); // 102
	}
	else
	{
		if (s->data[1] > s->data[2])
		{
			if (s->data[0] > s->data[2])
				reverse_rotate_a(s); // 120
			else
			{
				swap_a(s);
				rotate_a(s); // 021
			}
		}
	}
}

void	sort_5(t_stack *s)
{
	int	idx;

	idx = s->size;
	while (idx > 3)
	{
		push_b(s);
		--idx;
	}
	sort_3(s);
}

void	sort(t_stack *stack)
{
	if (stack->size <= 3)
		sort_3(stack);
	else
		sort_5(stack);
}
