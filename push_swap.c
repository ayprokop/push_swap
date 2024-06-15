/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:41:33 by ayprokop          #+#    #+#             */
/*   Updated: 2024/06/15 11:35:06 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
//TERMINAL
// gcc -o push_swap push_swap.c ./libft/libft.a ./ft_printf/libftprintf.a ENTER
// ./push_swap "apple kiwi" ENTER
// apple
// kiwi

//MAKEFILE
// gcc -c push_swap.c -I ./libft/libft.a -I ./ft_printf/ft_printf.a
// gcc -o push_swap push_swap.o -L ./libft -lft -L ./ft_printf -lftprintf
// ./push_swap "apple kiwi" ENTER
// apple
// kiwi


int main(int argc, char **argv)
{
	// how many arguments are there?
	// If no parameters are specified, the program must not display anything and give the
	// prompt back.
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');

		//ft_split()がちゃんと動作してるかどうかのチェック
		for (int i = 0; argv[i] != NULL; i++)
			ft_printf("%s\n", argv[i]);

		// push_swap(argv[1]);
		return (0);
	}
	return (0);

	// if error
	// 	"ERROR\n"

	// are the arguments numbers?

	// which sorting is suitable?

	// sorting (using instructions)cd
	

	// output
	// instructions must be separated by a ’\n’ 
}