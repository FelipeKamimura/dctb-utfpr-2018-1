
/* Exemplo de cria��o de Registros e Ponteiros */

#include<stdio.h>

struct Ponto{
   int x, y;
};

typedef struct Ponto Ponto;

int main(){

   // Declara��o de vari�vel do tipo Ponto
   Ponto inicio;

   inicio.x = 10;
   inicio.y = 20;

   printf("\n Valores do Ponto = (%d,%d)\n", inicio.x, inicio.y);

   return 0;
}