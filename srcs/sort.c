/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:06:39 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/20 16:02:41 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_in_a(t_stack *s)
{
	int	idx;

	idx = 0;
	if (s->idx_a != 0)
		return (0);
	while (idx < s->size)
	{
		if (s->data[idx] != idx)
			return (0);
		++idx;
	}
	return (1);
}

void	sort_3(t_stack *s)
{
	if (s->data[s->idx_a] > s->data[s->idx_a + 1])
	{
		if (s->data[s->idx_a] > s->data[s->idx_a + 2])
		{
			if (s->data[s->idx_a + 2] > s->data[s->idx_a + 1])
				rotate_a(s);
			else
			{
				swap_a(s);
				reverse_rotate_a(s);
			}
		}
	}
	else
	{
		if (s->data[s->idx_a + 1] > s->data[s->idx_a + 2])
		{
			if (s->data[s->idx_a] > s->data[s->idx_a + 2])
				reverse_rotate_a(s);
			else
			{
				swap_a(s);
				rotate_a(s);
			}
		}
	}
}

void	sort_5(t_stack *s)
{
	int	idx;

	idx = s->size;
	while (push_b(s), --idx > 3)
		;
	sort_3(s);
}

void	sort(t_stack *s)
{
	if (s->size <= 3)
		sort_3(s);
	else
		sort_5(s);
}
