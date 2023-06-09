/*
Elevador
A FCC (Fábrica de Cilindros de Carbono) fabrica vários tipos de cilindros de carbono. A FCC está instalada no décimo andar de um prédio, e utiliza os vários elevadores do prédio para transportar os cilindros. Por questão de segurança, os cilindros devem ser transportados na posição vertical; como são pesados, no máximo dois cilindros podem ser transportados em uma única viagem de elevador. Os elevadores têm formato de paralelepípedo e sempre têm altura maior que a altura dos cilindros.
Para minimizar o número de viagens de elevador para transportar os cilindros, a FCC quer, sempre que possível, colocar dois cilindros no elevador. A figura abaixo ilustra, esquematicamente (vista superior), um caso em que isto é possível (a), e um caso em que isto não é possível (b):
Como existe uma quantidade muito grande de elevadores e de tipos de cilindros, a FCC quer que você escreva um programa que, dadas as dimensões do elevador e dos dois cilindros, determine se é possível colocar os dois cilindros no elevador.
Entrada
A entrada contém vários casos de teste. A primeira e única linha de cada caso de teste contém quatro números inteiros L, C, R1 e R2, separados por espaços em branco, indicando respectivamente a largura do elevador (1 ≤ L ≤ 100), o comprimento do elevador (1 ≤ C ≤ 100), e os raios dos cilindros (1 ≤ R1, R2 ≤ 100).

O último caso de teste é seguido por uma linha que contém quatro zeros separados por espaços em branco.
Saída
Para cada caso de teste, o seu programa deve imprimir uma única linha com um único caractere: ‘S’ se for possível colocar os dois cilindros no elevador e ‘N’ caso contrário.
*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int l = 0, c = 0, r1 = 0, r2 = 0, maior = 0;
    char saida = 'N';
    cin >>l>>c>>r1 >>r2;
    if((l+c+r1+r2) == 0)
        return 0;
    if(r1 > r2)
        maior = r1+r1;
    else
        maior = r2+r2;
    if(maior <= l && maior <= c)
    {
        if(sqrt(pow((l - r2 - r1),2)+pow((c - r2 - r1),2)) >=  r1 + r2)
        {
            saida = 'S';
        }
    }
    cout << saida << endl;
    main();
    return 0;
}

