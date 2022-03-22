#include <stdio.h>
#include <time.h>


int menu(void);
int relatorio(void);
int autor(void);

int main(void) {

  autor(); 

  float vGasolina, vEtanol, vAditivada;
  int tamFila;
  
  printf("\nInforme o preço da Gasolina: ");
  scanf("%f", &vGasolina);
  
  printf("\nInforme o preço da Etanol: ");
  scanf("%f", &vEtanol);
   
  printf("\nInforme o preço da Gasolina Aditivada: ");
  scanf("%f", &vAditivada); 

  printf("\nInforme o tamanho suportado na fila de carros: ");
  scanf("%d", &tamFila);

   menu();

  return 0;
}

int menu(void){

  int opcao;

  printf("\n*****************************************************");
  printf("\n************>>>>>  MENU PRINCIPAL  <<<<<*************");  
  printf("\n*****************************************************");
  printf("\n********  1 - Adicionar um carro na fila   **********");
  printf("\n********        2 - Abastecimento          **********");
  printf("\n********       3 - Chamar o próximo        **********");
  printf("\n********          4 - Relatórios           **********");
  printf("\n********           5 - Encerrar            **********");
  printf("\n*****************************************************");

  fflush(stdin);
  printf("\n\nEscolha uma das opções do MENU PRINCIPAL:  ");
  scanf("%d", &opcao);

  switch(opcao){

    case 1:
      printf("\nCarro adicionado a fila");
    break;
    
    case 2:
      printf("\nCarro abstecido");
    break;
    
    case 3:
      printf("\nProximo carro da fila");
    break;
    
    case 4:
      relatorio();    
    break;
    
    case 5:
      printf("\nEncerrando programa !!!");
    break;
    
    default:
    //system("clear");
    printf("\nOpção invalida, tente novamente\n\n");
    menu();  
  }
  
  
  
}
int relatorio(void){


  printf("\n\n\nSelecione o relatorios que deseja emitir: ");
  printf("\n\n");
  printf("\n*****************************************************");
  printf("\n************>>>>>    RELATORIOS    <<<<<*************");  
  printf("\n*****************************************************");
  printf("\n\nA - Quantidade de litros ventido por tipo de combustivel"); 
  printf("\nB - Valor total arecadado com vendas por tipo de combustivel");
  printf("\nC - Quantidade de carros atendidos");
  printf("\nD - Quantidade de combustivel restante em cada tanque");

  
}

int autor(void){
  
  printf("\n*****************************************************\n");
  printf("\nAutor: Daniel Rafael de Souza\n");
  
  printf("\n*****************************************************\n\n");
  
  printf("Este é um sistema de controle do posto de combustivel\nQue possuira controle de preços, litros disponiveis e\nfila de carros\n");
  
 printf("\n*****************************************************\n");
  sleep(10);
  system("clear");
  
}


