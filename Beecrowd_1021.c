/*
Notas e Moedas

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float money,a;
	int i=0;
	scanf("%f",&money);
	a = fmod(money,100);
	printf("NOTAS:\n");
	printf("%.0f nota(s) de R$ 100.00\n", (money-a)/100);
	money = a;
	a = fmod(money,50);
	printf("%.0f nota(s) de R$ 50.00\n", (money-a)/50);
	money = a;
	a = fmod(money,20);
	printf("%.0f nota(s) de R$ 20.00\n", (money-a)/20);
	money = a;
	a = fmod(money,10);
	printf("%.0f nota(s) de R$ 10.00\n", (money-a)/10);
	money = a;
	a = fmod(money,5);
	printf("%.0f nota(s) de R$ 5.00\n", (money-a)/5);
	money = a;
	a = fmod(money,2);
	printf("%.0f nota(s) de R$ 2.00\n", (money-a)/2);
	money = a;
	a = fmod(money,1);
	
	printf("MOEDAS:\n");
	
	printf("%.0f moeda(s) de R$ 1.00\n", (money-a));
	money = a;

	i=0;
	while(money>0.5){
	i++;
	money=money-0.5000;	
	}
    printf("%d moeda(s) de R$ 0.50\n",i);	
	
	i=0;
	while(money>0.25){
	i++;
	money=money-0.25000;	
	}
    printf("%d moeda(s) de R$ 0.25\n",i);	

	i=0;
	while(money>0.10){
	i++;
	money=money-0.10000;	
	}
    printf("%d moeda(s) de R$ 0.10\n",i);	
		
	
    i=0;
	while(money>0.05){
	i++;
	money=money-0.0500;	
	}
    printf("%d moeda(s) de R$ 0.05\n",i);	
	money = money + 0.009;
	i=0;
	while(money>=0.01000){
	i++;
	money=money-0.01000;	
	}
    printf("%d moeda(s) de R$ 0.01\n",i);	
	
    return 0;
}
