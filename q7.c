/*

Faça um programa que seja capaz de calcular um termo da série de Fibonacci informado pelo usuário. Por exemplo, o programa deve poder calcular qual o vigésimo termo desta série;

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …

*/

#include <stdio.h>

int fibonacci(int n){
    if(n < 0) return -1;     // return -1 for invalid numbers
    if(n == 0) return 0;     // return 0 for first value
    if(n == 1) return 1;     // return 1 for secound value

    return fibonacci(n-2) + fibonacci(n-1);  // using recursion, calculetes the n term in fibonacci sequence
}


int main(){
    int input;

    printf("Qual termo deseja saber dentro da serie Fibonacci?\n");
    scanf(" %d", &input);

    printf("O %d termo da série Fibonacci: %d.\n", input, fibonacci(input));
}
