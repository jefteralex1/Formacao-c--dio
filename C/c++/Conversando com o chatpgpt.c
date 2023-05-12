#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[1000];
    scanf(" %[^\n]", mensagem); // lê a mensagem com espaços em branco

    char separador[] = " "; // define o separador como espaço em branco
    char *palavra = strtok(mensagem, separador); // divide a mensagem em palavras

    while (palavra != NULL) {
        printf("%s %s ", palavra, palavra); // imprime cada palavra duas vezes
        palavra = strtok(NULL, separador); // avança para a próxima palavra
    }

    printf("\n"); // imprime uma nova linha no final
    return 0;
}