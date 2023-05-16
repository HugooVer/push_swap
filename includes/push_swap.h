/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:05:11 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/16 17:30:51 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"

typedef struct s_stack	t_stack;

struct s_stack
{
	int		size;		//nb d'ints en para
	int		idx_a;		//l'index du debut de a dans le tableau d'int
	int		*data;			//le tableau d'int
};

int	*char_to_int(char **argv, t_stack *stack);
int	duplicate(int *in_stack, t_stack *stack);
int	*pre_sort(int *in_stack, t_stack *stack);

#endif


// index a = 0
// index de b = index a - 1
// stack a = 45 12 83 22
// pb
// index a = 1 aka 12
// index b = 0 aka 45
// pb 
// index a = 2 aka 83
// index b = 1 aka 12
//


// swap a 

// int tmp;

// tmp = stack[stack_data->index_a];
// stack[stack_data->index_a] = stack[stack_data->index_a + 1];
// stack[stack_data->index_a + 1] = tmp;

// fait un pre-sort

//genre on transforme 45 12 83 22
// ca fait 			  3  1  4  2