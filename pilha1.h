/*
TAD: implementação de pilha com lista
*/

typedef struct lista Lista;

typedef struct pilha Pilha;

// Função que faz alocação na memória 
Pilha* pilha_cria(void);

// Função que adiciona um elemento
void pilha_push(Pilha* p, float v);

// Função que retira um elemento
float pilha_pop(Pilha* p);

// Função que verifica se a estrutura está vazia
int pilha_vazia (Pilha* p);

// Função que faz a liberação na memória
void pilha_libera(Pilha* p);

// Função que imprime os valores da pilha
void imprime_pilha(Pilha* p);
