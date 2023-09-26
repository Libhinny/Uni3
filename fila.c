#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct _fila {
    int ini, fim; 
    int qtde; // num de elementos da fila 
    int MAX_SIZE; // tamanho maximo da fila
    int *val; // vetor dos valores
};


Fila *CriaFila (int MAX_SIZE){
    Fila *Q = (Fila*) calloc(1, sizeof(Fila));

    Q->val = (int*) calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtde = 0;
    Q->ini = Q->fim = 0;

    return Q;
}

void DestruirFila(Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->val); // desaloca o vetor de int
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){
    return (Q->qtde == 0);
}

int Filacheia (Fila *Q){
    return (Q->qtde == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elem){
    if (FilaCheia(Q)) {
        printf("Warming: Fila esta cheia\n");
        return 0; // falha na inserção
    }
    else {
        Q->val[Q->fim] = elem;
        Q->fim = (Q->fim+1) % Q->MAX_SIZE;
        Q->qtde++;
        return 1; // sucesso na inserção
    }
}

int RemoveFila(Fila *Q){
    if (Filavazia(Q)){
        printf("Warning: Fila esta vazia\n");
        return 1; // falha na remoção
    }
    else {
        Q->ini = (Q->ini+1) % Q->MAX_SIZE;
        Q->qtde--;
        return 1; // sucesso na remocao
    }
}

int ConsultaFila (Fila *Q, int *elem){
    if (FilaVazia(Q)){
        printf("Warning: Fila esta vazia\n");
        return 0; // falha ao consultar fila
    }
    else {
        *elem = Q->val[Q->ini];
        return 1; // sucesso ao consultar fila
    }
}

void ImprimeFila(Fila *Q){
    int i;
    if(FilaVazia(Q)){
        printf("A fila está vazia\n");
    } else {
        printf("Fila: ");
        for(i = Q->ini; i <= Q->fim; i++){
            printf("%d", Q->val[i]);
        }
    }
}