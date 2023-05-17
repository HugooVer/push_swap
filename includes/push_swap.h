/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:05:11 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/17 16:16:00 by hvercell         ###   ########.fr       */
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
	int	size;
	int	idx_a;
	int	*data;
};

int		*char_to_int(char **argv, t_stack *stack);
int		duplicate(int *in_stack, t_stack *stack);
int		*pre_sort(int *in_stack, t_stack *stack);


void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_a_b(t_stack *stack);

void	push_a(t_stack *stack);
void	push_b(t_stack *stack);

void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_a_b(t_stack *stack);

void	reverce_rotate_a(t_stack *stack);
void	reverce_rotate_b(t_stack *stack);
void	reverce_rotate_a_b(t_stack *stack);

#endif
