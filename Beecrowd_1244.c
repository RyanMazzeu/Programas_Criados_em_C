/*
Ordenação por Tamanho
Crie um programa para ordenar um conjunto de strings pelo seu tamanho. Seu programa deve receber um conjunto de strings e retornar este mesmo conjunto ordenado pelo tamanho das palavras, se o tamanho das strings for igual, deve-se manter a ordem original do conjunto.
Entrada
A primeira linha da entrada possui um único inteiro N, que indica o número de casos de teste. Cada caso de teste poderá conter de 1 a 50 strings inclusive, e cada uma das strings poderá conter entre 1 e 50 caracteres inclusive. Os caracteres poderão ser espaços, letras, ou números.
Saída
A saída deve conter o conjunto de strings da entrada ordenado pelo tamanho das strings. Um espaço em branco deve ser impresso entre duas palavras.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char v[50][50]={0};
int tamanhos[50]={0};
void imprimecerto(int a){
    for(int i=a;i>0;i--)
        printf("%s ",v[i]);

    printf("%s\n",v[0]);

}

void organiza(int a){
    char aux[50];
    for(int j=0;j<=a;j++){
        for(int i=j;i<=a;i++){
            if(strlen(v[j])>=strlen(v[i])){
                strcpy(aux,v[i]);
                strcpy(v[i],v[j]); 
                strcpy(v[j],aux);
  //              j=0;
            }

        }
    }
}



int main()
{
    int n=0,a=0,aux;
    char c;
    scanf("%d",&aux);
    getchar();
    while(aux>0){
    while(1){
        c = getchar();
        if(c!=' '&&c!='\n'){
            v[a][n] = c;
            n++;
        }
        if(c==' '){
            v[a][n] = '\0';
            n=0;
            a++;
        }
        if (c == '\n') {
                v[a][n] = '\0';
                break;
        }
    }
    organiza(a);
    imprimecerto(a);
    for(int i=0;i<50;i++){
            v[i][0]='\n';
    }
    a=0;
    n=0;
    aux--;
    }
    return 0;
}

