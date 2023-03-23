/*
Fuga do Cavalo
Seu amigo Pedro está aprendendo a jogar xadrez. Mas ele ainda não tem segurança de como pode movimentar o Cavalo. Desta forma, ele solicitou a você que desenvolvesse um programa que calcule, em apenas uma jogada, o número de distintos movimentos que o cavalo pode realizar, sem que o mesmo fique sobre o ataque de qualquer um dos 8 peões. Os movimentos do cavalo e dos peões são realizados conforme o jogo de xadrez tradicional, ou seja, o cavalo pode somente andar em “L”, e os peões atacar somente para frente em diagonal. Segue abaixo um exemplo:
Na imagem apresentada, das 8 distintas posições que o cavalo pode movimentar-se no tabuleiro, 2 delas estão sobre ataque (6b e 3e). Nas demais casas, o cavalo pode movimentar-se seguramente, conseguindo fugir do ataque de qualquer um dos peões. Note que na casa 2b já existe um peão, porém ainda é uma jogada válida, já que o cavalo pode movimentar-se nessa mesma casa e “matar” o peão.
Portanto, para o exemplo apresentado, o número de movimentos seguros para o cavalo realizar são 6. Vale lembrar que os peões pretos somente podem se movimentar de cima para baixo no tabuleiro, ou seja, da linha 7 até a linha 1, não sendo permitido o seu retorno.
Entrada
A entrada consiste de diversos casos de teste. Cada caso de teste consiste em 9 linhas de entrada. A primeira linha indica a posição inicial do cavalo. As demais 8 linhas, representam as respectivas posições dos peões.
O final da entrada consiste em uma única linha contendo somente o valor 0 (zero).
Saída
Para cada teste de caso de entrada, seu programa deve imprimir uma única linha, contendo a seguinte descrição:
Caso de Teste #Y: X movimento(s).
onde Y representa o número do respectivo caso de teste, e X representa a quantidade de movimentos possíveis ao cavalo realizar, em uma única rodada, sem que fique sobre ataque de um ou mais peões.
*/
#include <bits/stdc++.h>
using namespace std;
int dr[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dc[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dr2[] = {1, 1};
int dc2[] = {-1, 1};

int val(int i, int j)
{
    return i >= 0 && i < 8 && j >= 0 && j < 8;
}

int getx(string &in)
{
    return in[0] - '1';
}
int gety(string &in)
{
    return in[1] - 'a';
}

int main()
{
    int tab[8][8];
    int c = 1;
   
    string in;
   
    while (1)
    {
        cin >> in;
        if (in == "0") return 0;
        int x = getx(in);
        int y = gety(in);
        memset(tab, 0, sizeof tab);
        for (int i = 0 ; i < 8 ; ++i)
        {
            cin >> in;
            tab[getx(in)][gety(in)] = 1;
        }
        int ans = 0;
        for (int i = 0 ; i < 8 ; ++i)
        {
            if (val(x + dr[i], y + dc[i]))
            {
                int flag = 0;
                for (int j = 0 ; j < 2; ++j)
                {
                    if (val(x + dr[i] + dr2[j], y + dc[i] + dc2[j]))
                    {
                        if (tab[x + dr[i] + dr2[j]][y + dc[i] + dc2[j]])
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (!flag) ++ans;
            }
        }
        cout << "Caso de Teste #" << c++ << ": " << ans << " movimento(s).\n";
    }
}
