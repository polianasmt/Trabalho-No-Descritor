/*Este arquivo deve conter a implementação das funções "int consulta_lista_pos(Lista* li, int
pos, struct aluno *al), "int consulta_lista_mat(Lista* li, int mat, struct aluno *al)", "void
imprime_lista(Lista* li, struct aluno *al)"
*/

#include <stdio.h>
#include "header.h"

int consulta_lista_pos(Lista* li, int pos, struct aluno *al){

	return 0;
}

int consulta_lista_mat(Lista* li, int mat, struct aluno *al){

	return 0;
}


void imprime_lista(Lista* li, struct aluno *al){
    if(li == NULL || li->inicio == NULL){ //Verifica se a lista é NULL ou está vazia
        return; //Se for NULL ou vazia, sai da função sem fazer nada
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

