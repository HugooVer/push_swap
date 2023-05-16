/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:05:11 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/16 19:50:28 by hvercell         ###   ########.fr       */
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
	int	size;			//nb d'ints en para
	int	idx;			//l'index du debut de a dans le tableau d'int
	int	*data;			//le tableau d'int
};

int		*char_to_int(char **argv, t_stack *stack);
int		duplicate(int *in_stack, t_stack *stack);
int		*pre_sort(int *in_stack, t_stack *stack);

void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_a_b(t_stack *stack);
void	push_a(t_stack *stack);
void	push_b(t_stack *stack);

#endif
