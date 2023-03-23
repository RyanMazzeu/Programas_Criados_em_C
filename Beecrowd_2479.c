/*
Ordenando a Lista de Crianças do Papai Noel
Papai Noel está nos preparativos finais para a entrega dos presentes para as crianças do mundo todo pois o natal está chegando mais uma vez. Olhando suas novas listas de crianças que irão ganhar presentes neste ano ele percebeu que o duende estagiário (que havia ficado responsável por fazer as listas) não havia colocado os nomes em ordem alfabética.
Como o Papai Noel é um homem muito organizado ele deseja que cada lista de crianças possua, no seu final, o total de crianças que foram bem comportadas neste ano e um total das que não foram. Assim ele pode comparar a quantidade de crianças que se comportam este ano com as dos anos anteriores.
Para ajudar o bom velhinho, seu dever é criar um programa que leia todos os nomes da lista e imprima os mesmos nomes em ordem alfabética. No final da lista, você deve imprimir o total de crianças que foram e não foram comportadas neste ano.
Entrada
A entrada é composta por vários nomes. O primeiro valor N (0 ≤ N ≤ 100), indica quantos nomes tem na lista. As N linhas seguintes, contem um caracter especial correspondente ao comportamento da criança (+ indica que a criança foi bem comportada, - indica que a criança não foi bem comportada). Após o caracter especial, segue o nome da criança com no máximo 20 caracteres.
Saída
Para cada lista de crianças, você deve imprimir os nomes em ordem alfabética. Após imprimir os nomes das crianças, você deve mostrar o total de crianças que se comportaram bem ou mal durante o ano.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
 char nome[21];
 char c;
}crianca;

int main(int argc,char *argv[]){
 int n,x,y,mais=0,menos=0;
 scanf(" %d",&n);
 crianca cri[n],aux;
 for(x=0;x<n;x++){
  scanf(" %c",&cri[x].c);scanf("%s",cri[x].nome);
 }
 for(x=0;x<n;x++){
  if(cri[x].c=='+'){
   mais++;
  }else{
   menos++;
  }
 }
 for (x = 1; x < n; x++) {
        for (y = 0; y < n - x; y++) {
   if(strcmp(cri[y].nome,cri[y+1].nome)>0){
    aux=cri[y];
    cri[y]=cri[y+1];
    cri[y+1]=aux;
   }
        }
    }
 for(x=0;x<n;x++){
  printf("%s\n",cri[x].nome);
 }
 printf("Se comportaram: %d | Nao se comportaram: %d\n",mais,menos);
 return 0;
}
