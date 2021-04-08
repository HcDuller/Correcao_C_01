/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 01:38:41 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex01/ft_ultimate_ft.c"

int		main(void)
{
	int i;
	int *pi1;
	int **pi2;
	int ***pi3;
	int ****pi4;
	int *****pi5;
	int ******pi6;
	int *******pi7;
	int ********pi8;
	int *********pi9;

	pi1 = &i;
	pi2 = &pi1;
	pi3 = &pi2;
	pi4 = &pi3;
	pi5 = &pi4;
	pi6 = &pi5;
	pi7 = &pi6;
	pi8 = &pi7;
	pi9 = &pi8;
	printf("-------------------------Validacao do EX01-------------------------\n\n");
	printf("Escreva uma função que tenha um \n");
	printf("ponteiro para ponteiro para ponteiro para 	|\n");
	printf("ponteiro para ponteiro para ponteiro para 	| sim, estas linhas sao assim mesmo, sao 9 ponteiros\n");
	printf("ponteiro para ponteiro para ponteiro para	|\n");
	printf("int em parâmetro e dê ao int o valor de 42.\n");
	printf("before: %d\n\n", i);
	ft_ultimate_ft(pi9);
	printf("after: %d\n\n", i);
	printf("--------------------------------FIM--------------------------------\n\n");
	
	return (0);
}
