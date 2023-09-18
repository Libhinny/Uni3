#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct frutas{
    char nome[10];
    float preco;
    struct frutas *prox;
}Fruta;

Fruta *insere (struct frutas * fruta, char * nome){
    Fruta * novafruta = (struct frutas*) malloc(sizeof(struct frutas));
    strcpy(novafruta->nome, nome);
    novafruta->preco = 0.0;
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

    Fruta fruta[3];

    for (int i = 0; i < 3; i++){
        printf(fruta[i].nome, sizeof(fruta[i].nome), "Fruta%d", i + 1);
        fruta[i].preco = 1.0 + 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", fruta[i].nome);
        printf("Preco: %.2f reais\n", fruta[i].preco);
        printf("\n");
    }

    free(lista);

    return 0;
}