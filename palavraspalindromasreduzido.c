#include <stdio.h>
#include <string.h>
// Verificando se uma palavra é um palíndromo em c

int main () {
    char palavra[100]= {'\0'};
    int tam = 0, i, cont, valor = 1;
    i = 0;
    cont = 0;
    printf("\n\tDigite uma palavra: \n");
    scanf("%100[^\n]", palavra);
    strlwr(palavra);
    tam = strlen(palavra);
    tam--;
    while(i <= tam){
        if(palavra[i] != palavra[tam]){
            cont++;
        }
        i++;
        tam--;
    }
    if(cont == 0){
        printf("\n\tEh um palavra palindroma!\n");
    }
    else{
        printf("\n\tNao eh um palavra palindroma!\n");
    }
    return 0;
}