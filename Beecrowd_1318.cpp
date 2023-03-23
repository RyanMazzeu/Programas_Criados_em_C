/*
Bilhetes Falsos
Sua escola organizou uma grande festa para celebrar a brilhante vitória do seu time no prestigiado, e mundialmente famoso CCIP (Competição Colegial Internacional de Poesia). Todos na sua escola foram convidados para a noite, que incluía coquetel, jantar e uma sessão onde a poesia de seu time era lida para a audiência. O evento foi um sucesso – mais pessoas mostraram interesse em sua poesia do que você esperava – porém alguns de seus críticos disseram que tamanho público esteve presente graças à comida, e não graças a sua poesia.
Independente do motivo, no dia seguinte você descobriu o motivo pelo qual o salão esteve tão cheio: o diretor da escola lhe confidenciou que diversos dos bilhetes usados pelos visitantes eram falsos. O número real de bilhetes foram numerados sequencialmente de 1 a N (N ≤ 10000). O diretor suspeita que algumas pessoas usaram o scanner e a impressora da Sala da Computação para produzir cópias dos bilhetes verdadeiros. O diretor lhe deu um pacote contendo todos os bilhetes coletados dos visitantes na entrada da festa, e lhe pediu para que determinasse quantos bilhetes no pacote continham “clones”, isto é, outro bilhete com o mesmo número da sequência.
Entrada
A entrada contém dados de diversos casos de teste. Cada caso de teste contém duas linhas. A primeira linha contém dois inteiros N e M, que indicam, respectivamente, o número de bilhetes originais e o número de pessoas presentes na festa (1 ≤ N ≤ 10000 e 1 ≤ M ≤  20000). A segunda linha do caso de testes contém M inteiros Ti representando os números dos bilhetes contidos no pacote que o diretor lhe deu (1 ≤ Ti ≤ N). O final da entrada é indicado por N = M = 0.
Saída
Para cada caso de teste seu programa deverá imprimir uma linha, contendo o número de bilhetes do pacote que contém outro bilhete com o mesmo número da sequência.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>n>>m;
    while(m && n)
    {
        int a, casos[2001];
        for (int i=1; i<2001; i++)
        {
            casos[i]=0;
        }
        for (int i=1; i<=m; i++)
        {
            cin>>a;
            casos[a]++;
        }
        int soma = 0;
        for (int i=1; i<=n; i++)
        {
            if(casos[i]!=0 && casos[i]!=1)
            {
            soma++;
            }
        }
        cout<<soma<<endl;
        cin>>n>>m;
    }
    return 0;
}
