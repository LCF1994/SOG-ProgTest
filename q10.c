/*
10. Faça um programa que inverta os caracteres de uma string sem que um segundo buffer seja alocado.
 O programa não poderá utilizar funções pré-existentes da linguagem (ex. funções na STL do C++ como swap(), reverse(), etc), 
 além disso não deverá simplesmente imprimir a cadeia de caracteres em ordem inversa, 
 mas terá que fazer a manipulação direta sobre a cadeia de caracteres.
*/

#include <stdio.h>


void reverse(char *string, int begin, int end){
    if (begin >= end) return;
    
    char temp = string[begin];
    string[begin] = string[end];
    string[end] = temp;

    reverse(string, begin+1, end-1);
}

int length(char * s){
    int len = 0;
    do
    {
        len++;
    } while (s[len] != '\0');

    return len;
}

int main(){
    char string[] = "SOG";
    int len = length(string) -1;

    printf("%s\n", string);

    reverse(string, 0, len);

    printf("%s\n", string);

}