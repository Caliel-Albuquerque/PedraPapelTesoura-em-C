#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>




int main(void) {

  int num2[4], i, escolhaUser;
  char nomeEscolhaUser[20], nomeEscolhaMaquina[20];
  char resultado[200];
  char teste;
  


  printf("==================================\n");
  printf("      PEDRA, PAPEL OU TESOURA ");
  printf("\n==================================\n");


  printf("\n==================ESCOLHA==================\n");
  printf("                                    \n[1]Pedra               \n[2]Papel                 \n[3]Tesoura                   ");
  printf("\n\n===========================================\n");
  
  printf("\nQual você escolhe ? ");
  scanf("%i", &escolhaUser);

  
  srand(time(NULL));

    for(i = 0; i < 4; i++)
      num2[i] = 1 + rand() % 3;

    printf("\n\n"); 
    for(i = 0; i < 1; i++)
     //printf("%d ", num2[i]);
    printf("\n\n");

      
    //Verificação User  
    if(escolhaUser == 1){
      strcpy(nomeEscolhaUser, "Pedra");
    } else if(escolhaUser == 2){
      strcpy(nomeEscolhaUser, "Papel");
    } else if(escolhaUser == 3) {
      strcpy(nomeEscolhaUser, "Tesoura");
    } else {
      printf("Valor invalido!!");
    }
    //Verificação Maquina 
    if(num2[i] == 1){
      strcpy(nomeEscolhaMaquina, "Pedra");
    } else if(num2[i] == 2){
      strcpy(nomeEscolhaMaquina, "Papel");
    } else{
      strcpy(nomeEscolhaMaquina, "Tesoura");
    }

    printf("\nO user escolheu: %s || A maquina escolheu: %s", nomeEscolhaUser, nomeEscolhaMaquina);

  //Resultado  
  if(escolhaUser == 1 && num2[i] == 2){
    strcpy(resultado, "\nA maquina venceu!!");
    
  } else if(escolhaUser == 1 && num2[i] == 3){
    strcpy(resultado, "\nO jogador venceu venceu!!");
    
  } else if(escolhaUser == 2 && num2[i] == 1){
    strcpy(resultado, "\nO jogador venceu venceu!!");
    
  } else if (escolhaUser == 2 && num2[i] == 3){
    strcpy(resultado, "\nA maquina venceu!!");
    
  } else if(escolhaUser == 3 && num2[i] == 1){
    strcpy(resultado, "\nA maquina venceu!!");
    
  } else if (escolhaUser == 3 && num2[i] == 2){
    strcpy(resultado, "\nO jogador venceu venceu!!");
    
  } else {
    strcpy(resultado, "\nDeu EMPATE!!");
  }


  printf("\n %s\n", resultado);  

  while (escolhaUser != 2 && escolhaUser != 1 && escolhaUser != 3){
    printf("\e[H\e[2J");
    printf("\nVALOR INVALIDO ele deve ser 1, 2 ou 3\n");
    
    printf("==================================\n");
    printf("      PEDRA, PAPEL OU TESOURA ");
    printf("\n==================================\n");


    printf("\n==================ESCOLHA==================\n");
    printf("                                    \n[1]Pedra               \n[2]Papel                 \n[3]Tesoura                   ");
    printf("\n\n===========================================\n");
  
    printf("\nQual você escolhe ? ");
    scanf("%i", &escolhaUser);
    srand(time(NULL));

    for(i = 0; i < 4; i++)
      num2[i] = 1 + rand() % 3;

    printf("\n\n"); 
    for(i = 0; i < 1; i++)
     //printf("%d ", num2[i]);
    printf("\n\n");

      
    //Verificação User  
    if(escolhaUser == 1){
      strcpy(nomeEscolhaUser, "Pedra");
    } else if(escolhaUser == 2){
      strcpy(nomeEscolhaUser, "Papel");
    } else if(escolhaUser == 3) {
      strcpy(nomeEscolhaUser, "Tesoura");
    } else {
      printf("Valor invalido!!");
    }
    //Verificação Maquina 
    if(num2[i] == 1){
      strcpy(nomeEscolhaMaquina, "Pedra");
    } else if(num2[i] == 2){
      strcpy(nomeEscolhaMaquina, "Papel");
    } else{
      strcpy(nomeEscolhaMaquina, "Tesoura");
    }

    printf("\nO user escolheu: %s || A maquina escolheu: %s", nomeEscolhaUser, nomeEscolhaMaquina);

  //Resultado  
  if(escolhaUser == 1 && num2[i] == 2){
    strcpy(resultado, "\nA maquina venceu!!");
    
  } else if(escolhaUser == 1 && num2[i] == 3){
    strcpy(resultado, "\nO jogador venceu venceu!!");
    
  } else if(escolhaUser == 2 && num2[i] == 1){
    strcpy(resultado, "\nO jogador venceu venceu!!");
    
  } else if (escolhaUser == 2 && num2[i] == 3){
    strcpy(resultado, "\nA maquina venceu!!");
    
  } else if(escolhaUser == 3 && num2[i] == 1){
    strcpy(resultado, "\nA maquina venceu!!");
    
  } else if (escolhaUser == 3 && num2[i] == 2){
    strcpy(resultado, "\nO jogador venceu venceu!!");
    
  } else {
    strcpy(resultado, "\nDeu EMPATE!!");
  }


  printf("\n %s\n", resultado);  
  } 

  return 0;
  
}

 