/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:41:33 by ayprokop          #+#    #+#             */
/*   Updated: 2024/06/17 11:41:23 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//TERMINAL
// gcc -c push_swap.c push_swap_utils.c -I ./libft -I ./ft_printf
//MAKEFILE
// gcc -c push_swap.c push_swap_utils.c -I ./libft/libft.a -I ./ft_printf/libftprintf.a
// gcc -o push_swap push_swap.o push_swap_utils.o -L ./libft -lft -L ./ft_printf -lftprintf
// ./push_swap "apple kiwi" ENTER
// apple
// kiwi

void	free_stack(t_state state)
{
	free(state.stack_a);
	free(state.stack_b);
}

int	string_error_detector(int argc, char **argv)
{
	size_t i;
	size_t j;

	if (argc < 1)
		return (1);
	else if (argc == 1)
		return (0);
	else if (argc > 1)
	{
		i = 1;
		while (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] == ' ')//"string"なら　ft_splitへ
				{
					ft_printf("%c", argv[i][j]);
				}
				if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != ' ' && argv[i][0] != '-')
				{
					ft_printf("--%c\n", argv[i][j]);
					return (1);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}

// int	number_error_detector(int argc, char **argv)
// {
// 	int i;
	
// 	i = 0;
// 	while (argv[i] != NULL)
// 	{

// 	}
// 	return ()
// }

void	push_swap(int argc, char **argv)
{
	int i = 0;
	puts("");
	while (i < argc)
	{
		int j = 0;
		while (argv[i][j])
		{
			ft_printf("%c", argv[i][j]);
			j++;
		}
		puts("");
		i++;
	}	

}

int main(int argc, char **argv)
{
	t_state state;

	state.stack_a = (long *)malloc(sizeof(long) * argc);
	state.stack_b = (long *)malloc(sizeof(long) * (argc / 2));
	
	// input string check
	if (string_error_detector(argc, argv) == 1)
		ft_printf("Error\n");
	// else if (string_error_detector(argc, argv) == 0)
	// {
	// 	// number check in stack
	// 	if (number_error_detector() == 1)
	// 		ft_printf("Error\n");
	// 	else if (number_error_detector() == 0)
	// 	{
	// 		ft_split;
	// 		ft_atoi;
	// 		push_swap(argc, argv);
	// 	}
	// }	
	free_stack(state);
	return (0);
}

// Errors include for example: some arguments aren’t 
// integers, some arguments are bigger than an integer 
// and/or there are duplicates.