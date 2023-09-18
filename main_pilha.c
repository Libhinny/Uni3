#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main(void){

    Pilha* vetor, *n;
    pilha_cria;
    
    float v;

    printf("Informe os elementos para serem adicionados no vetor: \n");

    for (int i = 0; i < v; i++){
        scanf("%f", vetor->vet[i]);
    }

    pilha_push(vetor, v);
    pilha_pop(vetor);
    pilha_libera(vetor);
    imprime_pilha(vetor);

    return 0;
}