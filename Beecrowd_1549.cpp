/*Dividindo a Coca
Um grupo de N amigos foi a um restaurante almoçar. Embora cada pessoa escolheu um prato diferente para comer, todos decidiram que iriam beber Coca-Cola. O grupo pediu então uma garrafa de L ml de Coca-Cola, e deve agora dividir o conteúdo da garrafa entre as N pessoas de tal forma que todas as pessoas recebam partes iguais da bebida.
Há um copo vazio para cada pessoa, que deve ser preenchido com o refrigerante que aquela pessoa irá beber. Todos os N copos são iguais, e podem ser descritos como um tronco de um cone cuja altura é H cm, cuja base menor é uma circunferência de raio b cm e cuja base maior é uma circunferência de raio B cm, como indicado na imagem.
Indicação de copos preenchidos com Coca-Cola até a altura h cm
Sua tarefa é ajudar o grupo a dividir a garrafa de Coca-Cola. Para tal, você deve encontrar a altura h de cada copo de tal forma que, se cada copo for preenchido com refrigerante até a altura h cm, então todas as pessoas irão receber a mesma quantia da bebida. Considere que nenhum copo será preenchido com uma quantia de refrigerante maior que sua capacidade.
Entrada
A primeira linha de entrada contém um inteiro C que determina a quantidade de casos de teste. Cada caso de teste inicia com uma linha contendo dois inteiros, N e L (1 ≤ N ≤ 100, 1 ≤ L ≤ 108 ), indicando o número de pessoas no grupo e a quantia de Coca-Cola que deve ser dividida, em mililitros. A segunda linha contém três inteiros b, B e H (1 ≤ b ≤ B ≤ 100, 1 ≤ H ≤ 100), indicando o raio da base menor e maior do copo, assim como sua altura. Todas as medidas são dadas em centímetros.

Saída
Para cada caso de teste, imprima o valor de h tal que cada copo deve ser preenchido até a altura h cm. Arredonde e imprima o resultado com exatamente 2 casas decimais.
*/
#include <bits/stdc++.h>
#define PI M_PI

using namespace std;
int main()
{
    int cases;
    double pessoas, qtde, b, B, H;
    cin >> cases;
  
    while (cases--)
    {
        cin >> pessoas >> qtde >> b >> B >> H;
        double novov = (qtde / pessoas);
        double r2t = pow(novov * 3.0 * (B - b)/ (PI  * H) + b * b * b, 1.0 / 3.0);     
        double novoH = novov * 3.0 / (PI *(r2t * r2t + r2t * b + b * b));    
        cout << setprecision(2) << fixed << novoH << '\n';
    }
}
