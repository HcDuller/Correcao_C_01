/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 02:24:24 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex07/ft_rev_int_tab.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX07-------------------------\n\n");
	printf("Escreva uma função que inverta a ordem dos elementos de uma matriz de inteiros.\n");
	//printf("O endereço do primeiro caractere da string está contido no ponteiro passado como\n");
	//printf("parâmetro para a função.\n\n");
	
	
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int *pa;
	int i = 0;
	printf("\n\n");
	printf("Matriz Original	:	");
	pa = a;	
	while (i < 10)
	{
		printf("%d ",a[i]);
		i++;
	}	
	i = 0;
	printf("\n");
	printf("Matriz Reversa	:	");
	ft_rev_int_tab(pa,10);
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
