#include <stdio.h>
#include <string.h>
/*Descobrindo se uma palavra é palíndroma ou não! 
Palíndroma é quando o contrario de uma palavra é a palavra em si!
(Palindrome is a word, phrase or number that can be read the same way backward or forward.)
*/
int main () {
    int l = 0, tam = 0, tam2 = 0, x;
    char string1[200] = {'\0'}, string2[200] = {'\0'}, aux;
    scanf("%200[^\n]", string1);
    strlwr(string1);    
    while(string1[l] != NULL){        
        tam++;
        l++;
    }
    strcpy(string2, string1);
    for(l=0;l<tam;l++){
        for(x=l+1;x<tam;x++){
            aux = string2[l];
            string2[l] = string2[x];
            string2[x] = aux;
        }
    }
    l=0;
    while(string2[l] != '\0'){
        if(string2[l] == string1[l]){
            tam2++;
        }
        l++;
    }
    if(tam == tam2){
        printf("\n\tEh palindroma!\n");
    }
    else{
        printf("Nao eh Palindroma");        
    }
    return 0;
}