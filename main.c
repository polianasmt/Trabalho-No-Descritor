/*
 * Este é o arquivo principal que será o responsável por fazer todas as chamadas das funções
conforme a escolha do usuário através do menu.
 */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){

	Lista *li = cria_lista();

	int i = 1;
	int opcao, posicao, matricula;

	do{

        system("cls");
		menu();

		scanf("%d", &opcao);
        getchar();

		switch(opcao){

			case 1:
				if(insere_lista_inicio(li, dados_aluno)){
					mensagem_sucesso_insercao();
				}else{
					mensagem_falha_insercao();
				}

				esperar_enter();
				break;

			case 2:
				if(insere_lista_final(li, dados_aluno)){
					mensagem_sucesso_insercao();
				}else{
					mensagem_falha_insercao();
				}

				esperar_enter();
				break;

			case 3:
				if(remove_lista_inicio(li)){
					mensagem_sucesso_remover();
				}else{
					mensagem_removido_falha();
				}

                esperar_enter();
				break;

			case 4:
				if(remove_lista_final(li)){
					mensagem_sucesso_remover();
				}else{
					mensagem_removido_falha();
				}

                esperar_enter();
				break;

			case 5:
				printf("\n\tPosição: ");
				scanf("%d", &posicao);
				consulta_lista_pos(li, posicao, &dados_aluno);

                esperar_enter();
				break;

			case 6:
				printf("\n\tMatricula: ");
				scanf("%d", &matricula);
				consulta_lista_mat(li, matricula, &dados_aluno);

				esperar_enter();
				break;

			case 7:
				imprime_lista(li, &dados_aluno);

				esperar_enter();
				break;

			case 8:
				printf("\n\tA lista possui '%d' elementos cadastrados.", tamanho_lista(li));

				esperar_enter();
				break;

			case 9:
				i = 0;
				printf("\t\t\nEncerrando...");

                esperar_enter();
				break;

			default:
				printf("\tOpção inválida!");

				esperar_enter();
				break;
		}

	}while(i == 1);


	return 0;
}
