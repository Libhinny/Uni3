/*
TAD: fila de valores reais
*/

typedef struct fila Fila;

// função que cria a fila 
Fila * fila_cria(void);

// função que insere elementos na fila
void fila_insere(Fila* f, float v);

// função que retira elemento da fila
float fila_retira(Fila *f);

// função que verifica se a fila é vazia 
int fila_vazia(Fila* f);

// função que imprime os elementos da fila
void fila_imprime(Fila* f);

// função que faz a liberação da fila 
void fila_libera(Fila* f);