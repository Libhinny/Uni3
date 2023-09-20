#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int n;
    struct no* proximo;
} No;

typedef struct lista {
    No* elementos;
} Lista;

No* criarNo(int v) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }

    novoNo->n = v;
    novoNo->proximo = NULL;
    return novoNo;
}

void iniciaLista(Lista* l) {
    l->elementos = NULL;
}

void insereInicio(Lista* l, int v) {
    No* novoNo = criarNo(v);
    novoNo->proximo = l->elementos;
    l->elementos = novoNo;
}

No* ultimo(Lista* l){
    if (l->elementos == NULL){
        return NULL; // retorna null caso a lista estiver vazia
    }

    No* atual = l->elementos;
    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    return atual;
}

int main (void){
    Lista listagem;
    iniciaLista(&listagem);

    insereInicio(&listagem, 10);
    insereInicio(&listagem, 20);
    insereInicio(&listagem, 30);
    insereInicio(&listagem, 40);
    insereInicio(&listagem, 50);

    No* ultimoNo = ultimo(&listagem);

    if (ultimoNo != NULL){
        printf("Valor do ultimo no: %d\n", ultimoNo->n);
    } else {
        printf("A lista esta vazia\n");
    }

    return 0;
}
