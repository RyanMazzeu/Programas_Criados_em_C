/*
LED
João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.
Obs.: Para programadores de Javascript, recomenda-se o uso de "input.trim().split('\n')" para evitar erros conhecidos.
Entrada
A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.
Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j;
    char num[102];
    long long l;
    cin>>n;
    for(i=0;i<n;i++){
            cin>>num;
            j=0;
            l=0;
            while(true){
                        if(num[j]=='\0') 
                            break;
                        if(num[j]=='1') 
                            l+= 2;
                        if(num[j]=='2') 
                            l+= 5;
                        if(num[j]=='3') 
                            l+= 5;
                        if(num[j]=='4') 
                            l+= 4;
                        if(num[j]=='5') 
                            l+= 5;
                        if(num[j]=='6') 
                            l+= 6;
                        if(num[j]=='7') 
                            l+= 3;
                        if(num[j]=='8') 
                            l+= 7;
                        if(num[j]=='9') 
                            l+= 6;
                        if(num[j]=='0') 
                            l+= 6;
                        j++;
            }
            cout<<l<<" leds"<<endl;
    }
    return 0;
}
