/*
Frequência de Números
Neste problema sua tarefa será ler vários números e em seguida dizer quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.
Entrada
A entrada contém apenas 1 caso de teste. A primeira linha de entrada contem um único inteiro N, que indica a quantidade de valores que serão lidos para X (1 ≤ X ≤ 2000) logo em seguida. Com certeza cada número não aparecerá mais do que 20 vezes na entrada de dados.
Saída
Imprima a saída de acordo com o exemplo fornecido abaixo, indicando quantas vezes cada um deles aparece na entrada por ordem crescente de valor.
*/
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,*v,i,num,quant;
    cin>>n;
    v=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n);
    num=v[0];
    i=1;
    quant=1;
    while(1){
        if(i==n+1) break;
        if(v[i]==num){
            quant++;
            i++;
        }
        else{
            printf("%d aparece %d vez(es)\n",num,quant);
            num=v[i];
            quant=0;
        }
    }
    free(v);
    return 0;
}
