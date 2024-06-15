/*
 * Este arquivo deve conter a implementação das funções "Lista* cria_lista()", "void
 * libera_lista(Lista* li)", "int tamanho_lista(Lista* li)", "int lista_vazia(Lista* li)".
 */
#include <stdio.h>
#include <stdlib.h>
#include <header.h>

Lista* cria_lista(){
    //Aloca memória para uma nova lista e verifica se a alocação foi bem-sucedida
    Lista* li = (Lista*)malloc(sizeof(Lista));

    if(li != NULL){ //Se a alocação foi bem-sucedida
        li->inicio = NULL;//Inicializa o ponteiro para o início da lista como NULL (lista vazia)
        li->final = NULL; //Inicializa o ponteiro para o final da lista como NULL (lista vazia)
        li->qtd = 0;  //Inicializa a quantidade de elementos na lista como 0
    }

    return li; //Retorna o ponteiro para a nova lista criada
}

void libera_lista(Lista* li){

    if(li != NULL){ //Verifica se a lista não é NULL
        Elem* no; //Declara um ponteiro para elementos da lista
        while((li->inicio) != NULL){ //Percorre a lista enquanto houver elementos
            no = li->inicio; //Aponta para o primeiro elemento da lista
            li->inicio = li->inicio->prox; //Move o ponteiro de início para o próximo elemento
            free(no); //Libera a memória do elemento atual
        }
        free(li); //Libera a memória da estrutura descritor da lista
    }
}

int tamanho_lista(Lista* li){
    if(li == NULL) //Verifica se a lista é NULL
        return 0; //Se for NULL, retorna 0 (lista inexistente)

    return li->qtd; //Retorna a quantidade de elementos na lista
}

int lista_vazia(Lista* li){
    if(li == NULL){ //Verifica se a lista é NULL
        return 1; //Se for NULL, retorna 1 (lista vazia ou inexistente)
    }

    if(li->inicio == NULL){ //Verifica se o início da lista é NULL
        return 1; //Se for NULL, retorna 1 (lista vazia)
    }

    return 0; //Se a lista não for NULL e tiver elementos, retorna 0 (lista não vazia)
}
