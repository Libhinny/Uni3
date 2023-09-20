/*
TAD: simulação da calculadora HP
*/

typedef struct calc Calc;

// Funções exportadas
Calc* calc_cria(char* f);

// Função
void calc_operando (Calc* c, float v);

// Função
void calc_operador (Calc* c, char op);

// Função
void calc_libera(Calc* c);