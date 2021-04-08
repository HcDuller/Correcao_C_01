/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:58:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/08 02:14:45 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex06/ft_strlen.c"

int		main(void)
{	
	printf("-------------------------Validacao do EX06-------------------------\n\n");
	printf("Escreva uma função que mostre um a um os caracteres de uma string na tela. \n\n");
	printf("O endereço do primeiro caractere da string está contido no ponteiro passado como\n");
	printf("parâmetro para a função.\n\n");
	
	
	char str[] = "Esta string tem 30 caracteres.";
	printf("%s\n",str);
	printf("ft_strlen contou: %d caracteres.\n",ft_strlen(str));
	
	//printf("(este texto deve estar imediatamente apos \"This is a char array ( string )\"\n\n");
	printf("--------------------------------FIM--------------------------------\n\n");	
	return (0);
}
