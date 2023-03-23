/*
Gasto de Combustível
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

Entrada
O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h).

Saída
Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal
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
