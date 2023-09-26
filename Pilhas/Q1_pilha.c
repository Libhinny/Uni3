#include <stdio.h>
#include <stdlib.h>
#include "Q1_pilha.h"

struct pilha {
    int n;
    int capacidade;
    float *vet;
};

struct topo {
    Pilha* top;
    Pilha* prim;
};

Pilha* pilha_cria(void){
    int capacidade;
    Pilha* p = (Pilha*) malloc(capacidade*sizeof(Pilha));
    p->n = 0; // inicializa com zero elementos
    return p;
}

void pilha_push(Pilha* p, float v){
    int cap_dobrada;

    if (p->n == p->capacidade){ // capacidade esgotada
        printf("Capacidade da pilha estourou, haverá a realocacao do vetor.\n");
        cap_dobrada = 2*p->capacidade;
        p->vet = (float*) realloc(p->vet, cap_dobrada * sizeof(float));

        if (p->vet == NULL){
            printf("Erro na realocação de memoria\n");
            exit(1);
        }
        p->capacidade = cap_dobrada;
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

void pilha_libera(Pilha* p){ // liberação da memória
    free(p);
}


float topo(Pilha* p){

}

void concatena_pilhas(Pilha* p1, Pilha* p2){
    Pilha* ant = NULL;
    Pilha* p = p1;
    while (p != NULL){
        ant = p;
        p = p->proximo;
    }

}