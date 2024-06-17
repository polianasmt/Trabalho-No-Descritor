/*
 * Este arquivo deve conter a implementação das funções, "int remove_lista_inicio(Lista* li)",
"int remove_lista_final(Lista* li)"
 */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int remove_lista_inicio(Lista* li) {

    lista_vazia(li); //Verifica se a lista está vazia

    Elem *no = li->inicio; //Aponta 'no' para o primeiro elemento da lista
    li->inicio = no->prox; //Faz o início da lista apontar para o segundo elemento

    free(no); //Libera a memória do antigo primeiro elemento

    if(li->inicio == NULL) //Se a lista agora estiver vazia (nenhum elemento restante)
        li->final = NULL; //Define o final da lista como NULL também

    li->qtd--; //Decrementa a quantidade de elementos na lista

    return 1; //Retorna sucesso
}


int remove_lista_final(Lista* li) {

    lista_vazia(li); //Verifica se a lista está vazia

    Elem *ant, *no = li->inicio; //'no' aponta para o início da lista, 'ant' será usado para rastrear o elemento anterior

    while(no->prox != NULL) { //Itera até encontrar o último elemento (onde no->prox é NULL)
        ant = no; //'ant' armazena o elemento atual
        no = no->prox; //'no' avança para o próximo elemento
    }

    if(no == li->inicio) { //Se a lista tem apenas um elemento
        li->inicio = NULL; //Define o início da lista como NULL
        li->final = NULL; //Define o final da lista como NULL
    } else {
        ant->prox = no->prox; //Faz o penúltimo elemento apontar para NULL (removendo o último elemento)
        li->final = ant; //Atualiza o final da lista para o penúltimo elemento
    }

    free(no); //Libera a memória do antigo último elemento
    li->qtd--; //Decrementa a quantidade de elementos na lista

    return 1; //Retorna sucesso
}
