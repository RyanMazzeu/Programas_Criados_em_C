/*
Número Primo
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.
Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int x)
{
    int i, raiz;
    if(x<2)
        return 0;
    if(x==2)
        return 1;
    if(x%2==0)
        return 0;
    raiz=sqrt(x);
    
    for(i=3; i<=raiz; i=i+2)
    {
        if(x%i==0)
            return 0;
    }
    
    return 1;
}
int main()
{
    int X,a,N;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        scanf("%d", &X);
        if(1==primo(X))
            printf("%d eh primo\n", X);
        else if(0==primo(X))
            printf("%d nao eh primo\n", X);
    }
    return 0;
}
