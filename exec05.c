/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 02:01:34 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex05/ft_putstr.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX05-------------------------\n\n");
	printf("Escreva uma função que mostre um a um os caracteres de uma string na tela. \n\n");
	printf("O endereço do primeiro caractere da string está contido no ponteiro passado como\n");
	printf("parâmetro para a função.\n\n");
	
	
	char a[] = "This is a char array ( string )\0";		
	char *pa;
	
	pa = a;
	ft_putstr(pa);
	
	printf("(este texto deve estar imediatamente apos \"This is a char array ( string )\"\n\n");
	
	
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}
