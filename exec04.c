/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 01:57:24 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex04/ft_ultimate_div_mod.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX04-------------------------\n\n");
	printf("Escreva uma função ft_ultimate_div_mod que tenha a seguinte prototipagem: \n\n");
	printf("	void ft_ultimate_div_mod(int *a, int *b);	\n\n");
	printf("  Essa função divide os int apontados por a e b\n");
	printf("O resultado da divisão está armazenado no int apontado por a\n");
	printf("O resultado do resto da divisão está armazenado no int apontado por b\n\n");
	
	int a, b, *pa, *pb;

	pa = &a;
	pb = &b;
	a  = 57;
	b  = 10;
	printf("a: %d - b: %d\n",a,b);
	ft_ultimate_div_mod(pa, pb);
	printf("Apos executar a funcao...\n");
	printf("a(div): %d - b(mod): %d\n",a,b);
	
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}
