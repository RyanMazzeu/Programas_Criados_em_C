/*
Soma de Fatoriais
Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada, pois cálculo pode resultar em um valor com mais de 15 dígitos.

Entrada
O arquivo de entrada contém vários casos de teste. Cada caso contém dois números inteiros M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20). O fim da entrada é determinado por eof.

Saída
Para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo um número que é a soma de ambos os fatoriais (de M e N).
*/
#include <stdio.h>
unsigned long long Fact(int x)
{
    if(x==0) return 1;
    unsigned long long n=1;
    while(x>0)
    {
        n = n*x;
        x--;
    }
    return n;
}

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n) != EOF)
    {
        unsigned long long x;
        x = Fact(m)+Fact(n);
        printf("%llu\n",x);
    }
    return 0;
}
