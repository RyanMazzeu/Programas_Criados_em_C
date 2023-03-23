/*
Relógio Antigo
Ezequiel possui um relógio muito antigo e valioso, mas algumas características dele foram perdidas com o passar do tempo. Os ponteiros ainda marcam as horas e os minutos corretamente, mas seus marcadores e números se tornaram ilegíveis.
Ezequiel utiliza um instrumento auxiliar para observar os ângulos formados pelos ponteiros de hora e de minuto. Ele pede para você ajudá-lo escrevendo um programa que indica a hora e o minuto do momento da medição. Considere que às 00:00 os dois ângulos medidos são iguais a zero e que ambos os ponteiros só se movimentam quando se completa uma unidade de tempo (hora ou minuto) correspondente.
Entrada
A entrada consiste em vários casos de teste e é finalizada pelo fim de arquivo (EOF). Cada linha corresponde a um caso de teste e contém dois valores inteiros h e m (0 ≤ h, m < 360) que são, respectivamente, os ângulos medidos sobre os ponteiros de hora e de minuto.
Saída
Para cada caso de teste, imprima uma única linha com o valor da hora e do minuto no formato "hh:mm" (sem aspas), conforme pode ser observado nos exemplos.
*/
#include <stdio.h>
 
int main() {
    int h, m, respostaH, respostaM;
    while (scanf("%i %i", &h, &m) != EOF)
        printf("%02i:%02i\n", (int) h / 30, (int) m / 6);
  
    return 0;
}
