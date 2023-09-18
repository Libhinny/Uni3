#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define N 50 /* número máximo de elementos */

struct pilha {
    int n;
    float vet[N];
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0; // inicializa com zero elementos
    return p;
}

void pilha_push(Pilha* p, float v){
    if (p->n == N){ // capacidade esgotada
        printf("capacidade da pilha estourou.\n");
        exit(1); // aborta programa
    }
    /* insere um elemento na próxima posição livre */
    p->vet[p->n] = v; /* p->n é o elemento do topo */
    p->n++;
}

int pilha_vazia(Pilha* p){
    return (p->n == 0);
}

float pilha_pop(Pilha* p){
    float v;
    if(pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    /* retira o elemento do topo */
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void pilha_libera(Pilha* p){
    free(p);
}

void imprime_pilha(Pilha* p){
    int count;
    for(count = p->n-1; count >= 0; count--){
        printf("Os valores presentes na pilha são: %.2f \n", p->vet[count]);
    }
}