#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


int main(void){

    Pilha* vetor = pilha_cria(N);
    float v;

    printf("Informe os elementos para serem adicionados no vetor: \n");

    while (1){
        printf("Elemento ou -1 para encerrar: \n");
        scanf("%f", &v);
        
        if (v == -1){
            break;
        }

        pilha_push(vetor, v);
    }

    printf("\n Elementos removidos da pilha: \n");
    while (!pilha_vazia(vetor)){
        printf("%.2f\n", pilha_pop(vetor));
    }

    pilha_libera(vetor);

    return 0;
}