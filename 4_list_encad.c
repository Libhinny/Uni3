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

Lista* retira_n(Lista* l, int n){
    No* atual = l->elementos;
    No* anterior = NULL;

    while (atual != NULL){
        if (atual->n == n){
            if (anterior == NULL){
                l->elementos = atual->proximo;
                free(atual);
                atual = l->elementos;
            } else {
                anterior->proximo = atual->proximo;
                free(atual);
                atual = anterior->proximo;
            }
        } else {
            anterior = atual;
            atual = atual->proximo;
        }
    }

    return l;
}

void imprime(Lista* l){
    No* atual = l->elementos;
    while (atual != NULL){
        printf("%d -> ", atual->n);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

int main (void){
    Lista listagem;
    iniciaLista(&listagem);

    insereInicio(&listagem, 10);
    insereInicio(&listagem, 20);
    insereInicio(&listagem, 30);
    insereInicio(&listagem, 40);
    insereInicio(&listagem, 50);

    printf("Lista original: \n");
    imprime(&listagem);

    int valorN = 20;
    listagem = retira_n(&listagem, valorN);

    printf("Lista com %d removido: \n", valorN);
    imprime(&listagem);

    return 0;

}