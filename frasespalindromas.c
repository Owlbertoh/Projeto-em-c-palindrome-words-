#include <stdio.h>
#include <string.h>

int main (){
    char frase[200] = {'\0'};
    int tam, cont = 0, i=0;
    printf("\n\tEscreva uma frase: \n");
    scanf("%200[^\n]", frase);
    strlwr(frase);
    tam = strlen(frase);
    tam--;
    while(i <= tam){
        if(frase[i] == ' ' || frase[i] == '.' || frase[i] == '!' || frase[i] == '?'){
            i++;
        }
        if(frase[tam] == ' ' || frase[tam] == '.' || frase[tam] == '!' || frase[tam] == '?'){
            tam--;
        }
        if(frase[i] != frase[tam]){
            cont++;
        }
        i++;
        tam--;
    }
    if(cont == 0){
        printf("\n\tA frase eh palindroma! \n");
    }
    else{
        printf("\n\tA frase nao eh palindroma! \n");
    }
    return 0;
}