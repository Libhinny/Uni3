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

int maiorLista(Lista* l, int numero) {
    int i = 0;
    No* atual = l->elementos;
    while (atual != NULL) {
        if (atual->n > numero) {
            i++;
        }
        atual = atual->proximo;
    }
    return i;
}

int main() {
    Lista listagem;
    iniciaLista(&listagem);

    // Inserir alguns valores na lista
    insereInicio(&listagem, 10);
    insereInicio(&listagem, 20);
    insereInicio(&listagem, 30);
    insereInicio(&listagem, 40);
    insereInicio(&listagem, 50);

    int n;

    printf("Informe um valor de referencia: \n");
    scanf("%d", &n);

    int result = maiorLista(&listagem, n);
    printf("Numero de nos com valores maiores que %d: %d\n", n, result);

    return 0;
}
