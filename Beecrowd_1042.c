/*
Sort Simples
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if((a>b)&&(a>c)){
 	if(b>c){
 	     printf("%d\n%d\n%d",c,b,a);
 	}
 	else{
 	     printf("%d\n%d\n%d",b,c,a);
 	}
 }
 else if((b>a)&&(b>c)){
 	if(a>c){
 	     printf("%d\n%d\n%d",c,a,b);
 	}
 	else{
 	     printf("%d\n%d\n%d",a,c,b);
 	}
 	
 }
 else if((c>a)&&(c>b)){
 	if(a>b){
 	     printf("%d\n%d\n%d",b,a,c);
 	}
 	else{
 	     printf("%d\n%d\n%d",a,b,c);
 	}
 } 
    printf("\n\n");
	printf("%d\n%d\n%d\n",a,b,c);
}
