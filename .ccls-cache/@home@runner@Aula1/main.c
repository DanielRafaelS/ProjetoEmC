#include <stdio.h>

int main(void) {
  float vGasolina, vEtanol, vAditivada;
  int tamFila;
  printf("\n*****************************************************\n");
  printf("\nAutor: Daniel Rafael de Souza\n");
  
  printf("\n*****************************************************\n\n");
  
  printf("Este é um sistema de controle do posto de combustivel\nQue possuira controle de preços, litros disponiveis e\nfila de carros\n");
  
 printf("\n*****************************************************\n");
  printf("\nInforme o preço da Gasolina: ");
  scanf("%f", &vGasolina);
  
  printf("\nInforme o preço da Etanol: ");
  scanf("%f", &vEtanol);
   
  printf("\nInforme o preço da Gasolina Aditivada: ");
  scanf("%f", &vAditivada); 

  printf("\nInforme o tamanho suportado na fila de carros: ");
  scanf("%d", &tamFila);
  
  return 0;
}
