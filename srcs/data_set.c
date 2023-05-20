/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:46:26 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/20 16:05:23 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
