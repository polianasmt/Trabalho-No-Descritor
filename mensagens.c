/*
 * Este arquivo deve conter a implementação de todas as funções que exibem qualquer
informação na tela, como o menu de opções, mensagens de lista vazia ou lista cheia, etc.
 */

#include <stdio.h>
#include "header.h"

void menu(){
	printf("\n---------------------------------------------");
	printf("\n\t\t\tMENU");

	printf("\n");

	printf("\n\t[1] Inserir elemento no inicio");
	printf("\n\t[2] Inserir elemento no final");
	printf("\n\t[3] Remover elemento do inicio");
	printf("\n\t[4] Remover elemento do final");
	printf("\n\t[5] Consultar elemento pela posição");
	printf("\n\t[6] Consultar elemento pela matricula");
	printf("\n\t[7] Exibir lista");
	printf("\n\t[8] Exibir Tamanho da lista");
	printf("\n\t[9] Sair");
	printf("\n---------------------------------------------");

	printf("\n\tEscolha: ");

}


void mensagem_sucesso_insercao(){
	printf("\n\tElemento inserido com sucesso.");
}

void mensagem_falha_insercao(){
	printf("\n\tFalha na inserção");
}

void mensagem_sucesso_remover(){
	printf("\n\tElemento removido com sucesso.");
}

void mensagem_removido_falha(){
	printf("\n\tFalha na remoção.");
}
