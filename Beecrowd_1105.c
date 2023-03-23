/*
Sub-prime
A mais recente crise econômica foi em parte causada pela forma como os bancos faziam empréstimos para pessoas que não tinham capacidade de honrá-los e revendiam tais empréstimos para outros bancos (debêntures). Obviamente, quando as pessoas pararam de pagar os empréstimos, o sistema inteiro entrou em colapso.
A crise foi tão profunda que acabou atingindo países do mundo inteiro, inclusive a Nlogônia, onde o honrado primeiro ministro Man Dashuva ordenou que o presidente do Banco Central procurasse uma solução para o problema. Esse, por sua vez, teve uma idéia brilhante: se cada banco fosse capaz de liquidar seus empréstimos somente com suas reservas monetárias, todos os bancos sobreviveriam e a crise seria evitada. Entretanto, com o elevado número de debêntures e bancos envolvidos, essa tarefa é extremamente complicada, e portanto ele pediu a sua ajuda para escrever um programa que, dados os bancos e as debêntures emitidas, determine se é possível que todos os bancos paguem suas dívidas, utilizando suas reservas monetárias e seus créditos.
Entrada
A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois inteiros B e N, indicando respectivamente o número de bancos (1 ≤ B ≤ 20) e o número de debêntures emitidas pelos bancos (1 ≤ N ≤ 20). Os bancos são identificados por inteiros entre 1 e B. A segunda linha contém B inteiros Ri separados por espaços, indicando as reservas monetárias de cada um dos B bancos (0 ≤ Ri ≤ 104, para 1 ≤ i ≤ B). As N linhas seguintes contêm cada uma três inteiros separados por espaços: um inteiro D, indicando o banco devedor (1 ≤ D ≤ B), um inteiro C, indicando o banco credor (1 ≤ C ≤ B e D ≠ C), e um inteiro V, indicando o valor da debênture (1 ≤ V ≤ 104).
O final da entrada é indicado por uma linha que contém apenas dois zeros, separados por um espaço em branco.
Saída
Para caso de teste, seu programa deve imprimir uma única linha, contendo um único caractere: 'S', se for possível liquidar todos as debêntures sem intervenção do Banco Central da Nlogônia, e 'N', se algum banco precisar de empréstimos do governo para liquidar suas debêntures.
*/
#include <iostream>

using namespace std;

int main(){
    int b, n, i, d, c, v;
    bool negativo;
    while(true){
        cin >> b >> n;
        if(!b && !n)
            break;
        negativo = false;
        int reservas[b+1];
        for(i = 1; i < b+1; i++)
            cin >> reservas[i];

        for(i = 0; i < n; i++){
            cin >> d >> c >> v;
            reservas[d] = reservas[d] - v;
            reservas[c] = reservas[c] + v;
        }
        for(i = 1; i < b + 1; i++){
            if(reservas[i] < 0){
                negativo = true;
                break;
            }
        }
        if(negativo)
            cout << "N" << endl;
        else
            cout << "S" << endl;
    }

    return 0;
}
