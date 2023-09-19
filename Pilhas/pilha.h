/*
TAD: implementação de pilha
*/

/* struct com os campos de n e vetor*/
typedef struct pilha Pilha;

/* função que cria e faz a alocação da pilha */
Pilha * pilha_cria(void);

/* função que verifica se a pilha foi preenchida 
   e adiciona um elemento, caso a sua capacidade
   não tenha sido atingida */
void pilha_push(Pilha * p, float v);

/* função que retira o elemento do topo */
float pilha_pop(Pilha * p);

/* verifica se a pilha está vazia */
int pilha_vazia(Pilha * p);

/* Função que faz a liberação da memória alocada */
void pilha_libera(Pilha * p);

/* função que imprime os valores da pilha */
void imprime_pilha(Pilha* p);