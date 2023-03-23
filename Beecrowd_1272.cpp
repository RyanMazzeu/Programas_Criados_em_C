/*
Mensagem Oculta
Textos podem conter mensagens ocultas. Neste problema a mensagem oculta em um texto é composto pelas primeiras letras de cada palavra do texto, na ordem em que aparecem.

É dado um texto composto apenas por letras minúsculas ou espaços. Pode haver mais de um espaço entre as palavras. O texto pode iniciar ou terminar em espaços, ou mesmo conter somente espaços.

Entrada
A entrada contém vários casos de testes. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de uma única linha contendo de um a 50 caracteres, formado por letras minúsculas (‘a’-‘z’) ou espaços (‘ ’). Atenção para possíveis espaços no início ou no final do texto!

Nota: No exemplo de entrada os espaços foram substituídos por pequenos pontos (‘·’) para facilitar o entendimento dos exemplos.
Saída
Para cada caso de teste imprima a mensagem oculta no texto de entrada.
*/

#include <iostream>
using namespace std;

int main(){
    int N;
    bool primeiraLetra;
    string frase, resposta;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; ++i){
        getline(cin, frase);
        resposta = "";
        primeiraLetra = true;

        for(int j = 0; j < frase.length(); ++j){
            if(primeiraLetra && frase[j] != ' '){
                resposta += frase[j];
                primeiraLetra = false;
            }else if(!primeiraLetra && frase[j] == ' '){
                primeiraLetra = true;
            }
        }
        cout << resposta << endl;
    }
    return 0;
}
