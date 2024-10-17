#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Usando lista dupla (contém nós que são formados por informações e um 2 ponteiros(cursores): um aponta para o nó anterior e o outro para o nó posterior)
//Nó é cada elemento da lista. Ele é uma struct

//definindo um nó da lista 
typedef struct Node {

char word [15]; 
struct Node* post; 
struct Node* ant;
} Node;


//definindo uma nova estrutura para funcionar como editor , isso cria a ideia a lista
typedef struct Lista{
    struct Node* inicio;
    struct Node* fim;
    struct Node* cursor;// esse ponteiro vai sempre apontar (guardar o endereço do nó mais atual)

} Lista;

// funcao para iniciar a lista , vai retornar um ponteiro do tipo lista
Lista* iniciar_lista(){
 
      Lista* lista_novo= (Lista*)calloc(1,sizeof(Lista));
          if(lista_novo==NULL){
             printf("ERRO");
}
        *nova_lista.inicio = NULL;
        *nova_lista.fim = NULL;
        *nova_lista.cursor = NULL;

return lista_novo;

}

//funcao pra criar o nó (inserir elemento na lista)
void inserir_no_inicio(Lista* lista, const char* palavra) {
    // Cria um novo nó e inicializa sua memória
    Node* novo_no_inicio = (Node*)calloc(1, sizeof(Node));

    // Copia a palavra para o novo nó
    strncpy(novo_no_inicio->word, palavra, MAX_WORD_LENGTH);
    novo_no_inicio->word[MAX_WORD_LENGTH] = '\0'; // Garante que a string termina corretamente

    // Define o ponteiro anterior como NULL
    novo_no_inicio->prev = NULL;

    // Faz o novo nó apontar para o início atual da lista
    novo_no_inicio->next = lista->inicio;

    // Se a lista não estiver vazia, atualiza o ponteiro anterior do nó que estava no início
    if (lista->inicio != NULL) {
        lista->inicio->prev = novo_no_inicio;
    }

    // Atualiza o ponteiro de início da lista para o novo nó, o inicio da lista recebe (endereço/ponteiros) recebe oedereco do novo_no_inico pq agora ele é o inicio
    lista->inicio = novo_no_inicio;
}

