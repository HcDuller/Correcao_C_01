/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 02:24:20 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex08/ft_sort_int_tab.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX08-------------------------\n\n");
	printf("Escreva uma função que ordene uma matriz de inteiros em ordem crescente.\n\n");
	
	
	
	int a[] = {8,5,2,7,4,1,9,6,3,0};
	int *pa;
	int i = 0;	
	printf("Matriz Original	:	");
	pa = a;	
	while (i < 10)
	{
		printf("%d ",a[i]);
		i++;
	}	
	i = 0;
	printf("\n");
	printf("Matriz Ordenada	:	");
	ft_sort_int_tab(pa,10);
	while (i < 10)
	{
		printf("%d ",a[i]);
		i++;
	}	
	printf("\n\n");
	
	//printf("(este texto deve estar imediatamente apos \"This is a char array ( string )\"\n\n");
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}
