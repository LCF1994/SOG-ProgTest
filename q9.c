/*
9. Escreva uma função pesquisa_linear que tem como argumento de entrada:
um vetor de inteiros a ser pesquisado, o tamanho do vetor, e uma chave (um valor inteiro) a ser procurado. 
A função retorna um inteiro: o índice do elemento do vetor (se a chave for achada) ou -1 caso contrário. 
Além disso, mostre um exemplo de uso desta função em um programa com a chamada da função criada.
*/

#include <stdio.h>

int pesquisa_linear(int *vetor, int len, int chave){
    for(int i=0; i<=len; i++){
        if(vetor[i] == chave) return i;
    }
    return -1;
}

void print_result(int result){
    if(result != -1){
        printf("\n-> Chave encontrada na posicao %d.\n", result);
    } else {
        printf("\n-> Chave nao encontrada.\n");
    }
}

void print_vetor(char *nome, int *vetor, int size_v){
    printf("-> %s = ( ", nome);
    for (int i = 0; i < size_v; i++) {
        printf("%d%s",vetor[i], (i+1!= size_v)? ", ":" ");
    }
    printf(")\n");
}

void teste(int *v, int size_v, int chave){
    int result = pesquisa_linear(v, size_v, chave);

    printf("\nChave de busca = %d\nRetorno = %d ", chave, result);
    print_result(result);
    // print_vetor("v2", v, size_v);
}

int main(){
    int v2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int v3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    printf("Vetores de teste :\n");
    print_vetor("v2", v2, 10);

    teste(v2, 10, 6); 
    teste(v2, 10, 2); 
    teste(v2, 10, 11);
    teste(v2, 10, 13);

    printf("\nVetores de teste :\n");
    print_vetor("v3", v3, 10);

    teste(v3, 12, 6); 
    teste(v3, 12, 2); 
    teste(v3, 12, 11);
    teste(v3, 12, 13);
}