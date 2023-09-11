#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//lista encadeada

typedef struct frutas{
    char nome[10];
    ListaFrutas *prox;
}ListaFrutas;

int main(void){
    struct frutas *fruta1 = malloc(sizeof(ListaFrutas));
    struct frutas *fruta2 = malloc(sizeof(ListaFrutas));
    struct frutas *fruta3 = malloc(sizeof(ListaFrutas));

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

    return 0;
}
