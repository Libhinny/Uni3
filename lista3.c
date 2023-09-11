#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//lista encadeada

typedef struct frutas{
    char nome[10];
    struct frutas *prox;
};

insere (struct frutas * fruta, char * nome){
    struct frutas * novafruta = (struct frutas*) malloc(sizeof(struct frutas));
    strcpy(novafruta->nome, nome);
    novafruta->prox = fruta; // insere no inicio
    return novafruta;
}

int main(void){
    struct frutas * lista = NULL;
    lista = insere(lista, "maca");
    lista = insere(lista, "abacate");
    lista = insere(lista, "uva");

    struct frutas *p;

    for(p = lista; p!= NULL; p = p->prox){
        printf("%s\n", p->nome);
    }

    free(lista);

    return 0;
}