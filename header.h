/*
 * Este arquivo deve conter as definições e declarações das Structs contidas no projeto bem
como todas as assinaturas das funções que o projeto utiliza.
 */

//Definição de uma struct para representar um aluno
typedef struct aluno{
    int matricula; //Campo para armazenar o número da matrícula do aluno
    char nome[30]; //Campo para armazenar o nome do aluno (máximo de 30 caracteres)
    float n1, n2, n3; //Campos para armazenar as notas do aluno
} Aluno; //Definindo um apelido 'Aluno' para a struct 'aluno'

//Definição de uma struct Lista (descritor da lista)
typedef struct descritor Lista; //Definindo um apelido 'Lista' para a struct 'descritor'

//Definição de um nó da lista encadeada
struct elemento{
    struct aluno dados; //Campo que armazena os dados do aluno (usando a struct 'aluno')
    struct elemento *prox; //Ponteiro para o próximo elemento da lista
};

//Definindo um apelido 'Elem' para a struct 'elemento'
typedef struct elemento Elem;

//Definição da struct descritor, que serve para descrever a lista
struct descritor{
    struct elemento *inicio; //Ponteiro para o primeiro elemento da lista
    struct elemento *final; //Ponteiro para o último elemento da lista
    int qtd; //Campo para armazenar a quantidade de elementos na lista
};

//Declaração de uma variável do tipo 'Aluno' para armazenar e inserir os dados do aluno
Aluno dados_aluno;

//Função para criar uma nova lista (descritor) e inicializá-la
Lista* cria_lista();


Lista* cria_lista();

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);

int lista_vazia(Lista* li);

int insere_lista_incio(Lista* li, struct aluno al);

int insere_lista_final(Lista* li, struct aluno al);

int remove_lista_incio();

int remove_lista_final();

int consulta_lista_pos();

int consulta_lista_mat();

void imprime_lista();
