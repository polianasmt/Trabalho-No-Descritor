/*
 * Este é o arquivo principal que será o responsável por fazer todas as chamadas das funções
conforme a escolha do usuário através do menu.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(){

	Lista *li;
	li = cria_lista();
	int i = 1;
	int opcao;

	do{
		menu();

		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){

			case 1:
				if(insere_lista_inicio(li, dados_aluno)){
					mensagem_sucesso_insercao();
				}else{
					mensagem_falha_insercao();
				}
				break;

			case 2:
				if(insere_lista_final(li, dados_aluno)){
					mensagem_sucesso_insercao();
				}else{
					mensagem_falha_insercao();
				}
				break;

			case 3:
				remove_lista_inicio(li);

				break;

			case 4:
				remove_lista_final(li);

				break;

			case 5:
//				consulta_lista_pos(li);

				break;

			case 6:
//				consulta_lista_mat(li);

				break;

			case 7:
				imprime_lista(li, &dados_aluno);

				break;

			case 8:
				tamanho_lista(li);

				break;

			case 9:
				i = 0;
				break;

			default:
				printf("\tOpção inválida!");
				break;
		}

	}while(i == 1);


	return 0;
}
