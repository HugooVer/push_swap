/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:46:26 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/25 18:17:11 by hvercell         ###   ########.fr       */
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

void	first_things(int argc, char **argv, t_stack *s)
{
	s->size = argc - 1;
	s->idx_a = 0;
	char_to_int(argv, s);
	pre_sort(s);
	if (is_sorted_in_a(s) == 1)
		last_thing(s);
}

void	last_thing(t_stack *s)
{
	free (s->data);
	exit (EXIT_SUCCESS);
}
