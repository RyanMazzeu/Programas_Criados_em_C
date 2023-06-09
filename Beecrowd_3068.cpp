/*
Meteoros
Em noites sem nuvens pode-se muitas vezes observar pontos brilhantes no céu que se deslocam com grande velocidade, e em poucos segundos desaparecem de vista: são as chamadas estrelas cadentes, ou meteoros. Meteoros são na verdade partículas de poeira de pequenas dimensões que, ao penetrar na atmosfera terrestre, queimam-se rapidamente (normalmente a uma altura entre 60 e 120 quilômetros). Se os meteoros são suficientemente grandes, podem não queimar-se completamente na atmosfera e dessa forma atingem a superfície terrestre: nesse caso são chamados de meteoritos.
Zé Felício é um fazendeiro que adora astronomia e descobriu um portal na Internet que fornece uma lista das posições onde caíram meteoritos. Com base nessa lista, e conhecendo a localização de sua fazenda, Zé Felício deseja saber quantos meteoritos caíram dentro de sua propriedade. Ele precisa de sua ajuda para escrever um programa de computador que faça essa verificação automaticamente.

São dados:
• uma lista de pontos no plano cartesiano, onde cada ponto corresponde à posição onde caiu um meteorito;
• as coordenadas de um retângulo que delimita uma fazenda. As linhas que delimitam a fazenda são paralelas aos eixos cartesianos. Sua tarefa é escrever um programa que determine quantos meteoritos caíram dentro da fazenda (incluindo meteoritos que caíram exatamente sobre as linhas que delimitam a fazenda).
Entrada
Seu programa deve ler vários conjuntos de testes. A primeira linha de um conjunto de testes quatro números inteiros X1 , Y1 , X2 e Y2, em que (0 ≤ Y2 < Y1 ≤ 10.000) e (0 ≤ X1 < X2 ≤ 10.000), onde (X1 , Y1 ) é a coordenada do canto superior esquerdo e (X2 , Y2 ) é a coordenada do canto inferior direito do retângulo que delimita a fazenda. A segunda linha contém um inteiro, N (0 ≤ N ≤ 10.000), que indica o número de meteoritos. Seguem-se N linhas, cada uma contendo dois números inteiros X (0 ≤ X ≤ 10.000) e Y (0 ≤ Y ≤ 10.000), correspondendo às coordenadas de cada meteorito. O final da entrada é indicado por X1 = Y1 = X2 = Y2 = 0.
Saída
Para cada conjunto de teste da entrada seu programa deve produzir duas linhas na saída. A primeira linha deve conter um identificador do conjunto de teste, no formato “Teste n”, onde n é numerado a partir de 1. A segunda linha deve conter o número de meteoritos que caíram dentro da fazenda.
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x1, x2, y1, y2, c1, c2, i=0, num, soma=0, teste=0;

    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;

    while (x1!=0 && y1!=0 && x2!=0 && y2!=0)
    {
        cin>>num;
        i=0;
        while (i<num)
        {
            cin>>c1;
            cin>>c2;
            if ((c1>=x1 && c1<=x2) || (c1>=x2 && c1<= x1))
            {
                if ((c2>=y1 && c2<=y2) || (c2>=y2 && c2<=y1))
                {
                    soma = soma + 1;
                }
            }

            i++;
            }
        teste++;
        cout<<"Teste "<< teste << endl;
        cout << soma << endl;
        
        cin>>x1>>y1>>x2>>y2;
        soma = 0;
    }
    return 0;
}
