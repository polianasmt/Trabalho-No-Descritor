/*
 * Este arquivo deve conter a implementação das funções, "int insere_lista_inicio(Lista* li,
 * struct aluno al)", "int insere_lista_final(Lista* li, struct aluno al)".
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"


Aluno inserir_dados(){
    Aluno al; //Declara uma variável do tipo Aluno para armazenar os dados do aluno

    printf("\n");

    //Solicita a matrícula do aluno
    printf("\tMatricula: ");
    fflush(stdout);
    scanf("%d", &al.matricula); //Lê um inteiro do console e armazena na variável 'matricula' do struct 'al'

    //Solicita o nome do aluno
    printf("\tNome: ");
    fflush(stdout);
    scanf("%s", al.nome); //Lê uma string do console e armazena na variável 'nome' do struct 'al'

    //Solicita a primeira nota do aluno
    printf("\tNota 1: ");
    fflush(stdout);
    scanf("%f", &al.n1); //Lê um número float do console e armazena na variável 'n1' do struct 'al'

    //Solicita a segunda nota do aluno
    printf("\tNota 2: ");
    fflush(stdout);
    scanf("%f", &al.n2); //Lê um número float do console e armazena na variável 'n2' do struct 'al'

    //Solicita a terceira nota do aluno
    printf("\tNota 3: ");
    fflush(stdout);
    scanf("%f", &al.n3); //Lê um número float do console e armazena na variável 'n3' do struct 'al'

    return al; // Retorna o struct 'al' preenchido com os dados do aluno
}


int insere_lista_inicio(Lista* li, struct aluno al){

    if(li == NULL) //Verifica se a lista é NULL (ou seja, se o descritor da lista existe)
        return 0; //Retorna 0 indicando falha na inserção

    Elem* no; //Declara um ponteiro para um novo elemento do tipo Elem

    no = (Elem*)malloc(sizeof(Elem)); //Aloca memória para o novo elemento

    if(no == NULL) //Verifica se a alocação de memória falhou
        return 0; //Retorna 0 indicando falha na inserção

    al = inserir_dados();//al recebe a função definida ali em cima para receber os dados dos alunos

    no->dados = al; //Copia os dados do aluno para o novo elemento
    no->prox = li->inicio; //Faz o novo elemento apontar para o atual primeiro elemento da lista
    if(li->inicio == NULL){ //Verifica se a lista estava vazia
        li->final = no; //Se a lista estava vazia, o novo elemento também será o último
    }

    li->inicio = no; //Atualiza o ponteiro de início da lista para o novo elemento
    li->qtd++; //Incrementa a quantidade de elementos na lista

    return 1; //Retorna 1 indicando sucesso na inserção
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL){ //Verifica se a lista é NULL (ou seja, se o descritor da lista existe)
        return 0; //Retorna 0 indicando falha na inserção
    }

    Elem *no; //Declara um ponteiro para um novo elemento do tipo Elem

    no = (Elem*)malloc(sizeof(Elem)); //Aloca memória para o novo elemento

    if(no == NULL){ //Verifica se a alocação de memória falhou
        return 0; //Retorna 0 indicando falha na inserção
    }

    al = inserir_dados(); //al recebe a função definida ali em cima para receber os dados dos alunos

    no->dados = al; //Copia os dados do aluno para o novo elemento
    no->prox = NULL; //Define que o próximo elemento após o novo será NULL (pois ele será o último da lista)

    if(li->inicio == NULL) //Verifica se a lista está vazia
        li->inicio = no; //Se a lista está vazia, o novo elemento será também o primeiro
    else
        li->final->prox = no; //Atualiza o ponteiro do atual último elemento para apontar para o novo

    li->final = no; //Atualiza o ponteiro de final da lista para o novo elemento
    li->qtd++; //Incrementa a quantidade de elementos na lista
    return 1; //Retorna 1 indicando sucesso na inserção
}
