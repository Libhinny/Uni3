/*
TAD: Fila Circular Estática
*/

typedef struct _fila Fila;

// cria a fila 
Fila *CriaFila (int MAX_SIZE);

// elimina a fila 
void DestruirFila(Fila **Q);

// faz a verificacao se a fila esta vazia ou nao 
int FilaVazia(Fila *Q);

//verifica se a fila nao atingiu seu limite
int Filacheia (Fila *Q);

// insere um elemento na fila (no seu fim)
int InsereFila(Fila *Q, int elem);

// remove um elemento da fila (o primeiro)
int RemoveFila(Fila *Q);

// consulta os elementos na fila 
int ConsultaFila (Fila *Q, int *elem);

void ImprimeFila(Fila *Q);