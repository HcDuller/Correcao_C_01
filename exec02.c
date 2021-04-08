/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 01:52:00 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex02/ft_swap.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX02-------------------------\n\n");
	printf("Escreva uma função que troque o conteúdo de dois inteiros \n");
	printf("cujos endereços são dados em parâmetros\n\n");
	
	int a;
	int b;
	int *pa;
	int *pb;

	pa = &a;
	pb = &b;
	a = 100;
	b = 888;
	printf("Valores Originais: a: %d - b: %d\n",a,b);
	ft_swap(pa,pb);
	printf("Valores pos swap : a: %d - b: %d\n\n",a,b);
	
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}
