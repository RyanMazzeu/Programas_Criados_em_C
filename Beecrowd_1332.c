/*
Um-Dois-Três
Seu irmão mais novo aprendeu a escrever apenas um, dois e três, em Inglês. Ele escreveu muitas dessas palavras em um papel e a sua tarefa é reconhecê-las. Nota-se que o seu irmão mais novo é apenas uma criança, então ele pode fazer pequenos erros: para cada palavra, pode haver, no máximo, uma letra errada. O comprimento de palavra é sempre correto. É garantido que cada palavra que ele escreveu é em letras minúsculas, e cada palavra que ele escreveu tem uma interpretação única.
Entrada
A primeira linha contém o número de palavras que o seu irmão mais novo escreveu. Cada uma das linhas seguintes contém uma única palavra com todas as letras em minúsculo. As palavras satisfazem as restrições acima: no máximo uma letra poderia estar errada, mas o comprimento da palavra está sempre correto. Haverá, no máximo, 1000 palavras de entrada.
Saída
Para cada caso de teste, imprima o valor numérico da palavra.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara1(char v[10]){
    int aux=0;
    if(v[0]=='o')
        aux++;
    if(v[1]=='n')
        aux++;
    if(v[2]=='e')
        aux++;
    return aux;
}
int compara2(char v[10]){
    int aux=0;
    if(v[0]=='t')
        aux++;
    if(v[1]=='w')
        aux++;
    if(v[2]=='o')
        aux++;
    return aux;
}

int main()
{
    int n,a,b,aux;
    char palavra[10];
    scanf("%d",&n);
    getchar();
        while(n>0){
        gets(palavra);
        aux = strlen(palavra);
        if(aux>3){
            printf("3\n");

        }
        else{
            a = compara1(palavra);
            b = compara2(palavra);
            if(a>b){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    n--;
    }
    return 0;
}
