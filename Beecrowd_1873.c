/*
Pedra-papel-tesoura-lagarto-Spock
Pedra-papel-tesoura-lagarto-Spock é uma expansão do clássico método de seleção em jogo de pedra-papel-tesoura. Atua sob o mesmo princípio básico, mas inclui outras duas armas adicionais: o lagarto (formado pela mão igual a uma boca de fantoche) e Spock (formada pela saudação dos vulcanos em Star Trek). Isso reduz as chances de uma rodada terminar em um empate. O jogo foi inventado por Sam Kass e Karen Bryla, como "Rock Paper Scissors Lizard Spock". As regras de vantagem são as seguintes:
Tesoura corta papel
Papel cobre pedra
Pedra derruba lagarto
Lagarto adormece Spock
Spock derrete tesoura
Tesoura prende lagarto
Lagarto come papel
Papel refuta Spock
Spock vaporiza pedra
Pedra quebra tesoura
Um dia, dois amigos, Rajesh e Sheldon, decidiram apostar quem pagaria um almoço para o outro, com esta brincadeira. Sua missão será fazer um algoritmo que, baseado no que eles escolherem, informe quem irá ganhar ou se dará empate.

Entrada
Haverá diversos casos de teste. O primeiro número a ser lido será um inteiro C, representando a quantidade de casos de teste. Cada caso de teste tem duas palavras, representando a escolha de Rajesh e de Sheldon, respectivamente.

Saída
Para cada caso de teste, imprima quem venceu, ou se houve empate.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char retornaletra(char v[10]){
    if(strcmp(v, "pedra")==0)
        return 'r';
    if(strcmp(v, "papel")==0)
        return 'p';
    if(strcmp(v, "tesoura")==0)
        return 't';
    if(strcmp(v, "lagarto")==0)
        return 'l';
    if(strcmp(v, "spock")==0)
        return 's';
}

int main()
{
    int n;
    char rajesh[10],sheldon[10],r,s;
    scanf("%d",&n);
    while(n>0){
        scanf("%s",&rajesh);
        scanf("%s",&sheldon);
        r = retornaletra(rajesh);
        s = retornaletra(sheldon);

        switch(r){
        case 'r':
            if(s == 't' || s == 'l'){
                printf("rajesh\n");
            }
            else
                if(s == 'r'){
                    printf("empate\n");
                    }
                else{
                    printf("sheldon\n");
                    }
            break;

        case 'p':
            if(s == 's' || s == 'r'){
                printf("rajesh\n");
                }
            else
                if(s == 'p'){
                printf("empate\n");
                }
                else{
                printf("sheldon\n");
                }
            break;

        case 't':
            if(s == 'p' || s == 'l'){
                printf("rajesh\n");
                }
            else
                if(s == 't'){
                    printf("empate\n");
                }
                else{
                    printf("sheldon\n");
                }
            break;

        case 'l':
            if(s == 's' || s == 'p'){
                printf("rajesh\n");
                }
            else
                if(s == 'l'){
                    printf("empate\n");
                }
                else{
                    printf("sheldon\n");
                }
            break;

        case 's':
            if( s == 'r' || s == 't'){
                printf("rajesh\n");
                 }
            else
                if(s == 's')
                {
                printf("empate\n");
                }
                else
                {
                printf("sheldon\n");
                }
            break;
        }

    n--;
    }
    return 0;
}
