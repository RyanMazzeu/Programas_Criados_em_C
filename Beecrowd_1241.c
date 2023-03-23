/*
Encaixa ou Não II
Paulinho tem em suas mãos um novo problema. Agora a sua professora lhe pediu que construísse um programa para verificar, à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.
Entrada
A entrada consiste de vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter até 1000 dígitos.
Saída
Para cada caso de entrada imprima uma mensagem indicando se o segundo valor encaixa no primeiro valor, confome exemplo abaixo.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, count, j, k;
    char A[1001], B[1001];
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        count = 0;
        scanf("%s %s", &A, &B);

        for(j = strlen(B), k = strlen(A); j >= 0; j--, k--){
            if(B[j] == A[k]){
                count++;
            }
        }
        if(count == strlen(B) + 1){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }
    return 0;
}
