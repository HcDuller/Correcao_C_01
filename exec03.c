/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 01:51:20 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex03/ft_div_mod.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX03-------------------------\n\n");
	printf("Escreva uma função ft_div_mod que tenha a seguinte prototipagem: \n\n");
	printf("	void ft_div_mod(int a, int b, int *div, int *mod);	\n\n");
	printf("  Essa função divide os dois parâmetros a e b e armazena o resultado\n");
	printf("no int apontado e m armazena o resto da divisão de a e b no int apon\n");
	printf("tado por mod\n\n");
	
	int a = 57,b = 10,c,d,*pc,*pd;

	pc = &c;
	pd = &d;
	ft_div_mod(a,b,pc,pd);
	printf("a: %d | b: %d | div: %d | mod: %d\n\n",a,b,*pc,*pd);
	
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}
