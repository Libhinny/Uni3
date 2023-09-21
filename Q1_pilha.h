/*
TAD: Pilha de valores reais
*/

typedef struct pilha Pilha;

// Função que cria a pilha fazendo alocação na memoria
Pilha* pilha_cria(void);

// Função que adiciona um elemento na pilha e faz a 
// realocação, caso a capacidade tenha sido atingida
void pilha_push(Pilha*p, float v);

// Função que retira um elemento da pilha 
float pilha_pop(Pilha* p);

// Verifica se a pilha está vazia
int pilha_vazia(Pilha* p);

// Função que faz a liberação da memória alocada
void pilha_libera(Pilha* p);

// Função que retorna o valor do topo da pilha e restaura o conteudo da pilha 
float topo(Pilha* p);

// Função que recebe duas pilhas e passa os elementos da pilha p2 para o topo da pilha p1
void concatena_pilhas(Pilha* p1, Pilha* p2);