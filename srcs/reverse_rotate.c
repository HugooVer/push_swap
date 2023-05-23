/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:55:49 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/23 14:51:10 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack *s)
{
	int	a;
	int	b;

	a = s->size - 1;
	b = a - 1;
	while (b >= s->idx_a)
	{
		s->data[a] ^= s->data[b];
		s->data[b] ^= s->data[a];
		s->data[a] ^= s->data[b];
		--a;
		--b;
	}
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack *s)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (b < s->idx_a)
	{
		s->data[b] ^= s->data[a];
		s->data[a] ^= s->data[b];
		s->data[b] ^= s->data[a];
		++a;
		++b;
	}
	ft_printf("rrb\n");
}

void	reverse_rotate_a_b(t_stack *s)
{
	int	a;
	int	b;

	a = s->size - 1;
	b = a - 1;
	while (b >= s->idx_a)
	{
		s->data[a] ^= s->data[b];
		s->data[b] ^= s->data[a];
		s->data[a] ^= s->data[b];
		--a;
		--b;
	}
	a = 0;
	b = a + 1;
	while (b < s->idx_a)
	{
		s->data[b] ^= s->data[a];
		s->data[a] ^= s->data[b];
		s->data[b] ^= s->data[a];
		++a;
		++b;
	}
	ft_printf("rrr\n");
}
