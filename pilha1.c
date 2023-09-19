#include <stdio.h>
#include <stdlib.h>
#include "1lista.c"
#include "pilha.h"


struct lista {
    float info;
    struct lista* prox;
};

struct pilha {
    Lista* prim;
};

Pilha* pilha_cria(void){ // alocacao de memoria
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void pilha_push(Pilha* p, float v){ //adiciona um elemento
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}

int pilha_vazia (Pilha* p){ //verificacao se esta vazia
    return (p->prim == NULL);
}

float pilha_pop(Pilha* p){ // retira elemento
    Lista* t;
    float v;
    if (pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    return v;
}

void pilha_libera(Pilha* p){ // liberação da memória
    free(p->prim);
    free(p);
}

void imprime_pilha(Pilha* p){ // imprime os valores dentro do vetor
    int count;
    for(count = p->prim-1; count >= 0; count--){
        printf("Os valores presentes na pilha são: %.2f \n", p->prim[count]);
    }
}