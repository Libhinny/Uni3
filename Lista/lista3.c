#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct frutas{
    char nome[10];
    struct frutas *prox;
}Fruta;

Fruta *insere (struct frutas * fruta, char * nome){
    Fruta * novafruta = (struct frutas*) malloc(sizeof(struct frutas));
    strcpy(novafruta->nome, nome);
    novafruta->prox = fruta; // insere no inicio
    return novafruta;
}

int main(void){
    Fruta * lista = NULL;
    lista = insere(lista, "maca");
    lista = insere(lista, "abacate");
    lista = insere(lista, "uva");

    Fruta *p;

    for(p = lista; p!= NULL; p = p->prox){
        printf("%s\n", p->nome);
    }

    free(lista);

    return 0;
}