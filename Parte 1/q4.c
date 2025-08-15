#include <stdio.h>

void inversor(char *string) {
    int tamanho = 0;

    // Conta o tamanho da string 
    while (string[tamanho] != '\0') tamanho++;

    // Inverte a string
    for (int i = 0; i < tamanho / 2; i++) {
        char aux = string[i]; // Realiza a troca
        string[i] = string[tamanho - 1 - i];
        string[tamanho - 1 - i] = aux;
    }
}

int main() {
    char string[6] = "even3";

    inversor(string);
    printf("%s", string);

    return 0;
}
