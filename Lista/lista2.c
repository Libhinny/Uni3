#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//lista encadeada

typedef struct frutas{
    char nome[10];
    struct frutas *prox;
}ListaFrutas;

int main(void){
    ListaFrutas *fruta1 = (ListaFrutas*)malloc(sizeof(ListaFrutas));
    ListaFrutas *fruta2 = (ListaFrutas*)malloc(sizeof(ListaFrutas));
    ListaFrutas *fruta3 = (ListaFrutas*)malloc(sizeof(ListaFrutas));

    // inicializa os nomes das frutas

    strcpy(fruta1->nome, "maca");
    strcpy(fruta2->nome, "abacate");
    strcpy(fruta3->nome, "uva");

    // faz o encadeamento dos espaços 

    fruta1->prox = fruta2;
    fruta2->prox = fruta3;
    fruta3->prox = NULL; // para mostrar que chegou ao fim

    ListaFrutas*p;

    for(p = fruta1; p!= NULL; p = p->prox){
        printf("%s\n", p->nome);
    }

    free(fruta1);
    free(fruta2);
    free(fruta3);

    return 0;
}