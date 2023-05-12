#include <stdio.h> //necessário para usar funções de entrada e saída padrão em C
#include <math.h>  //contém as definições de várias funções matemáticas

int main() {
  double largura, comprimento, area, tempo; //retorna um inteiro(int). Em seguida, são definidas quatro variáveis de ponto flutuante (double) que serão usadas para armazenar os valores de largura, comprimento, área e tempo.

  scanf("%lf", &largura);
  scanf("%lf", &comprimento); //"scanf()" é usado para ler os valores de entrada do usuário, que são as dimensões da sala: largura e comprimento. A letra "l" em "%lf" indica que estamos lendo um valor de ponto flutuante (double), e o "&" é usado para passar o endereço da variável onde o valor será armazenado.

  area = largura * comprimento;
  tempo = area / 5.0;

  printf("O robô de limpeza levará %d minutos para limpar a sala.\n", (int) ceil(tempo)); //Esta linha usa a função "printf()" para imprimir na tela o resultado, que é o tempo necessário para limpar a sala com um robô de limpeza. A letra "d" em "%d" indica que estamos imprimindo um valor inteiro, que é o tempo arredondado para cima usando a função "ceil()". Note que a função "ceil()" retorna um valor de ponto flutuante (double), então usamos um casting para converter o resultado para um inteiro.

  return 0;
}