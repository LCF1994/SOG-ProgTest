/* 
8. Faça um programa que calcule o tamanho de um string informado pelo usuário (não usar nenhuma função para isso, tal como strlen() ou lenght());
*/

#include <stdio.h>

int main(){

    char string[141];

    printf("Digite um texto para saber seu tamanho em caracteres:\n");
    scanf(" %140[^\n]", string);

    int i = 0;
    do
    {
        i++;
    } while (string[i] != '\0');
    
    
    printf("\n\n'%s' tem %d caracteres\n", string, i);
}