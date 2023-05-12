#include <stdio.h> //necessário para usar funções de entrada e saída padrão em C;

int main() {
  float peso, altura;
  char temPelos, ehMamifero;

  
  scanf("%f", &peso);
  scanf("%f", &altura);
  scanf(" %c", &temPelos);
  scanf(" %c", &ehMamifero); //"scanf()" é usado para ler os valores de entrada do usuário;
  
  if (peso >= 2000 && altura >= 300) {
    printf("O animal é um elefante!\n");
  } else if (altura == 150 && ehMamifero == 's') {
    printf("O animal é um cavalo!\n");
  } else if (temPelos == 's' && ehMamifero == 's' && altura <= 100) {
    printf("O animal é um cachorro!\n");
  } else if (temPelos == 'n' && ehMamifero == 'n') {
    printf("O animal é uma serpente!\n");
  } else if (temPelos == 'n' && ehMamifero == 's') {
    printf("O animal é uma tartaruga!\n");
  } else {
    printf("Não foi possível classificar o animal!\n");
  }
  
  return 0;
}
