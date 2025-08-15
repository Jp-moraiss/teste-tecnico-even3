#include <stdio.h>

void nao_repetidos(int *lista, int tamanho) {

    for (int i = 0; i < tamanho; i++){
        int flag = 0; // variável para sinalizar se o lista[i] repetiu ou não (reinicializa como 0 a cada iteração)
        for (int j = 0; j < tamanho; j++){ // Percorre duas vezes, usando a variável 'i' para comparar
            if (i != j && lista[i] == lista[j]){ // Se repetir, muda o valor da flag
                flag = 1;
                break; // Se tiver repetido interrompe o laço, pois o valor repetido não será impresso
            }
        }
        if (!flag) printf("%d ", lista[i]); // Se a flag permanecer como 0, quer dizer que o número não é repetido. Pode imprimir.
    }

}

int main() {
    int lista[] = {1, 2, 2, 3, 4, 4, 5};
    int tamanho = 7;

    printf("Nao repetidos: ");
    nao_repetidos(lista, tamanho);

    return 0;
}
