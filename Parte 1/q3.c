#include <stdio.h>

int somador(int n){
    int soma = 0;
    for (int i = 1; i <= n; i++) soma += i; // Armazena na variável 'soma' os números de 1 até n
    return soma;
}

int main(){

    printf("%d", somador(5));

    return 0;
}