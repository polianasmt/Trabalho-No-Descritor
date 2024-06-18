/*Este arquivo deve conter a implementação das funções "int consulta_lista_pos(Lista* li, int
pos, struct aluno *al), "int consulta_lista_mat(Lista* li, int mat, struct aluno *al)", "void
imprime_lista(Lista* li, struct aluno *al)"
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    lista_vazia(li); //Verifica se a lista está vazia

    if (pos <= 0){ //Verifica se a posição é inválida (menor ou igual a zero)
        return 0; //Retorna 0 indicando falha
    }

    Elem *no = li->inicio; //Inicia o ponteiro 'no' no início da lista
    int i = 1; //Inicia o índice na posição 1

    while(no != NULL && i < pos){ //Percorre a lista até encontrar a posição desejada ou o final da lista
        no = no->prox; //Avança para o próximo elemento
        i++; //Incrementa o índice
    }

    if(no == NULL){ //Verifica se o ponteiro 'no' é NULL (posição não encontrada)
        mensagem_posicao_nao_encontrada(); //Função para exibir mensagem de posição não encontrada
        return 0; //Retorna 0 indicando falha
    } else {
        *al = no->dados; //Copia os dados do elemento encontrado para a estrutura 'al'
        exibir_consulta(al); //Imprime a lista
        return 1; //Retorna 1 indicando sucesso
    }

}

int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    lista_vazia(li); //Verifica se a lista está vazia

    Elem *no = li->inicio; //Inicia o ponteiro 'no' no início da lista

    while(no != NULL && no->dados.matricula != mat) //Percorre a lista até encontrar a matrícula ou o final da lista
        no = no->prox; //Avança para o próximo elemento

    if(no == NULL || no->dados.matricula != mat){ //Verifica se a matrícula não foi encontrada
        mensagem_matricula_nao_encontrada(); //Função para exibir mensagem de matrícula não encontrada
        return 0; //Retorna 0 indicando falha
    } else {
        *al = no->dados; //Copia os dados do elemento encontrado para a estrutura 'al'
        exibir_consulta(al); //Imprime a lista
        return 1; //Retorna 1 indicando sucesso
    }

}


void imprime_lista(Lista* li, struct aluno *al){
	if(li == NULL){ //Verifica se a lista é NULL
	       printf("\n\tLista vazia ou inexistente.");
	    }

	    if(li->inicio == NULL){ //Verifica se o início da lista é NULL
	    	printf("\n\tLista vazia.");
	    }

    Elem* no = li->inicio; //Cria um ponteiro para percorrer a lista, começando pelo primeiro elemento

    while(no != NULL){ //Loop que percorre todos os elementos da lista

        *al = no->dados; //Copia os dados do elemento atual para a estrutura 'al'

        printf("\n---------------------------------------------\n");
        printf("\n\tMatricula: %d\n", al->matricula); //Imprime a matrícula do aluno
        printf("\tNome: %s\n", al->nome); //Imprime o nome do aluno

        printf("\tNotas: ");
        printf("\n\t1° Nota: %.2f", al->n1); //Imprime a primeira nota do aluno
        printf("\n\t2° Nota: %.2f", al->n2); //Imprime a segunda nota do aluno
        printf("\n\t3° Nota: %.2f\n", al->n3); //Imprime a terceira nota do aluno

        no = no->prox; //Move o ponteiro para o próximo elemento da lista
    }
}

