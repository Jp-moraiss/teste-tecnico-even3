#include <stdio.h>

void validador(char *email){
    int i = 0;
    int flag = 0;

    // Conta o tamanho da string 
    while (email[i] != '\0'){
        if (email[i] == '@') flag = 1; // Se a string tiver um @, muda o valor da flag
        
        if (flag){ // Se o valor da flag foi mudado, significa que tem @
            if (email[i] == '.'){ // Então confere se existe um '.' depois do @
                printf("Parece um email valido.\n");
                return; // Retorna a função, para não precisar prosseguir mais, pois já foi confirmado que o email é válido.
            }
        }
        i++;
    }

    printf("Nao parece um email valido.\n"); // Se chegar até aqui, significa que não entrou na condicional do ".", logo, o email não é válido.
        
}

int main(){

    validador("jp@even3.com");
    validador("jp");
    validador("even3@");

    return 0;
}