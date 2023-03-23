/*/
Idade em Dias
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias
Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
*/
#include <stdio.h>
 
int main() {
    int t,a=0,m=0,d=0;
    scanf("%d",&t);
    
    while(t>=365){
        a++;
        t = t-365;
    }
    while(t>=30){
        m++;
        t = t-30;
    }
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",t);
    
    return 0;
}
