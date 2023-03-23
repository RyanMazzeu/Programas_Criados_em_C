/*
Ele Está Impedido!
A Rede do Hemisfério é a maior rede de televisão de Tumbolia, um pequeno país situado a leste da América do Sul (ou sul da América do Leste). O esporte mais popular em Tumbolia, obviamente, é o futebol; muitos jogos são transmitidos toda semana em Tumbolia.
A Rede do Hemisfério recebe muitos pedidos para repassar lances polêmicos; normalmente esses acontecem quando um jogador é dito impedido pelo juíz. Um jogador atacante está impedido se ele está mais próximo da linha do gol do oponente do que o penúltimo adversário. Um jogador não está impedido se
ele está na mesma linha que o penúltimo adversário ou ele está na mesma linha que os dois últimos adversários.
Através do uso de tecnologia de computação gráfica, a Rede do Hemisfério consegue tirar uma foto do campo e determinar as distâncias dos jogadores até a linha do gol do time defensor, mas eles ainda precisam de um programa que, dadas essas distâncias, decida se um jogador está impedido.

Entrada
O arquivo de entrada contém vários casos de teste. A primeira linha de cada caso de teste contém dois inteiros A e D separados por um espaço indicando, respectivamente, o número de jogadores atacantes e defensores envolvidos na jogada (2 ≤ A, D ≤ 11). A próxima linha contém A inteiros Bi separados por um espaço, indicando as distâncias dos jogadores atacantes até a linha do gol (1 ≤ Bi ≤ 104). A próxima linha contém D inteiros Cj separados por um espaço, indicando as distâncias dos defensores até a linha do gol (1 ≤ Cj ≤ 104). O final da entrada é dado por A = D = 0.
Saída
Para cada caso de teste na entrada imprima uma linha contendo um único caractere: "Y" (maiúsculo) se existe um jogador atacante impedido, e "N" (maiúsculo) caso contrário.
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,d,i;
    vector<int> atac;
    vector<int> def;
    while(cin>>a>>d){
        if(!a && !d)    
            break;
        atac.assign(a,0);
        def.assign(d,0);
        for(i=0;i<a;++i){
            cin>>atac[i];
        }
        for(i=0;i<d;++i){
            cin>>def[i];
        }
        sort(atac.begin(), atac.end());
        sort(def.begin(), def.end());
        if((char)(atac[0]<def[1]))
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
