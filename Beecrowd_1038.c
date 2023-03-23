/*
Lanche
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/
#include <stdio.h>
 
int main() {
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    
    switch(a){
        case(1): printf("Total: R$ %.2f\n",4.00*b);
                break;
        case(2): printf("Total: R$ %.2f\n",4.50*b);
                break;
        case(3): printf("Total: R$ %.2f\n",5.00*b);
                break;
        case(4): printf("Total: R$ %.2f\n",2.00*b);
                break;
        case(5): printf("Total: R$ %.2f\n",1.50*b);
        
    }
    return 0;
}
