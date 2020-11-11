# SOG-ProgTest

# Ambiente

Os codigos foram desenvolvidos em C utilizando o Visual Studio Code. 
Para complição dos códigos diretamento do Visual Studio Code, foi utilizada uma extensão que permite a integração 
do MinGW compilado e executando o debugger.

Todos os códigos foram testados diretamente do terminal (powershell) integrado com o Visual Studio.

# Testes

Para validação e testes em outros ambientes é preciso se atentar que os programas não possuem uma pausa no final
pra aguardar o usuario ler as informações mostradas na tela.
Sugiro a execução dos programas via terminal (prompt ou powershell) invés de uma execução direta.

# Questões:

7. Faça um programa que seja capaz de calcular um termo da série de Fibonacci informado pelo usuário. Por exemplo,
o programa deve poder calcular qual o vigésimo termo desta série;
    
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …

### Solução:
    O programa desenvolvido permite que o usuario informe qual termo deseja saber dentro da serie Fibonacci. 
    Para o calculo do valor do termo, foi utilizada uma função recursiva. Caso algum numero negativo seja 
    informado o retorno é fixo em -1 indicando um erro. 
    Além do resultado solicitado também é informado o valor do vigésimo termo da séria como comprovação de que o
    programa consegue calcular o vigésimo termo.

    Observação: Não foi prevista nenhuma validação na entrada de dados.

    link para o código: https://github.com/LCF1994/SOG-ProgTest/blob/main/q7.c
    link para o programa: https://github.com/LCF1994/SOG-ProgTest/blob/main/q7.exe

8. Faça um programa que calcule o tamanho de um string informado pelo usuário (não usar nenhuma função para isso,
tal como strlen() ou lenght());

### Solução:
    Um programa com três partes.
        1- capturar a entrada do usuario, lendo uma string limitada em 140 caracteres e salvar em um vetor do tipo
        caracteres;
        2- utilizar um loop para contar quantas posições foram utilizadas dentro do vetor antes da marcação de fim
        do vetor ('\0');
        3- exibir em tela a string passada pelo usuario e a quantidade de caracteres que ela contém.

    link para o código: https://github.com/LCF1994/SOG-ProgTest/blob/main/q8.c
    link para o programa: https://github.com/LCF1994/SOG-ProgTest/blob/main/q8.exe

9. Escreva uma função pesquisa_linear que tem como argumento de entrada:
um vetor de inteiros a ser pesquisado, o tamanho do vetor, e uma chave (um valor inteiro) a ser procurado. 
A função retorna um inteiro: o índice do elemento do vetor (se a chave for achada) ou -1 caso contrário. 
Além disso, mostre um exemplo de uso desta função em um programa com a chamada da função criada.

### Solução
    Após escrever a função solicitada no padrão da linguagem C, foram criadas outras funções auxiliares para 
    simplificar as demosntrações.
    Dois vetores de tamanhos distintos foram criados para demonstração. Com base nesses vetores 4 números foram 
    buscados em cada um,
    utilizando a função pesquisa_linear.
    A execução do programa inicia escrevendo os vetores utilizados para a demostração em tela e em seguida a 
    bateria de buscas para cada um 
    dos vetores.

    link para o código: https://github.com/LCF1994/SOG-ProgTest/blob/main/q9.c
    link para o programa: https://github.com/LCF1994/SOG-ProgTest/blob/main/q9.exe

10. Faça um programa que inverta os caracteres de uma string sem que um segundo buffer seja alocado.
 O programa não poderá utilizar funções pré-existentes da linguagem (ex. funções na STL do C++ como swap(), 
 reverse(), etc), 
 além disso não deverá simplesmente imprimir a cadeia de caracteres em ordem inversa, 
 mas terá que fazer a manipulação direta sobre a cadeia de caracteres.

### Solução:
    Utilizar uma funçao Recursiva para inverter o primeiro e o ultimo caracter da string, apenas uma variavel 
    temporaria foi alocada para não 
    haver uma perda de informação durante a trocar de posições. Dessa maneira apenas uma variavel tipo char a mais 
    é necessaria para fazer a inversão.

    Como demonstração o programa exibe a string que será invertida e abaixo a mesma string após a inversão.

    link para o código: https://github.com/LCF1994/SOG-ProgTest/blob/main/q10.c
    link para o programa: https://github.com/LCF1994/SOG-ProgTest/blob/main/q10.exe


