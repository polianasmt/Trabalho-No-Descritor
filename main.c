/*
 * Este é o arquivo principal que será o responsável por fazer todas as chamadas das funções
conforme a escolha do usuário através do menu.
 */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){

	Lista *li;
	li = cria_lista();
	int x = insere_Lista_inicio(li, dados_aluno);
	int y = insere_lista_final(li, dados_aluno);
	tamanho_lista(li);
	lista_vazia(li);
	libera_lista(li);

	return 0;
}
