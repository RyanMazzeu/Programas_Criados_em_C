/*
Sudoku

O jogo de Sudoku espalhou-se rapidamente por todo o mundo, tornando-se hoje o passatempo mais popular em todo o planeta. Muitas pessoas, entretanto, preenchem a matriz de forma incorreta, desrespeitando as restrições do jogo. Sua tarefa neste problema é escrever um programa que verifica se uma matriz preenchida é ou não uma solução para o problema.

A matriz do jogo é uma matriz de inteiros 9 x 9 . Para ser uma solução do problema, cada linha e coluna deve conter todos os números de 1 a 9. Além disso, se dividirmos a matriz em 9 regiões 3 x 3, cada uma destas regiões também deve conter os números de 1 a 9. O exemplo abaixo mostra uma matriz que é uma solução do problema.



Entrada
São dadas várias instâncias. O primeiro dado é o número n > 0 de matrizes na entrada. Nas linhas seguintes são dadas as n matrizes. Cada matriz é dada em 9 linhas, em que cada linha contém 9 números inteiros.

Saída
Para cada instância seu programa deverá imprimir uma linha dizendo "Instancia k", onde k é o número da instância atual. Na segunda linha, seu programa deverá imprimir "SIM" se a matriz for a solução de um problema de Sudoku, e "NAO" caso contrário. Imprima uma linha em branco após cada instância.
*/

#include <stdio.h>

int main() {
	int k, i, j, temp, instancia = 0, solucao = 1;
	int matriz[9][9], somaLinha[9], somaColuna[9], somaMatriz[3][3];

	scanf("%i", &k);

    for(int cont = 0; cont < k; cont++) {
		for(i = 0; i < 9; i++) {
			for(j = 0; j < 9; j++) {
				scanf("%i", &matriz[i][j]);
			}
    	}
		for (i = 0; i < 9; i++) {
			somaLinha[i]         = 0;
			somaColuna[i]        = 0;
			somaMatriz[i/3][i%3] = 0;
		}
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				temp = matriz[i][j] * matriz[i][j];
				somaLinha[i]  += temp;
				somaColuna[j] += temp;
				somaMatriz[i/3][j/3] += temp;
				if (i == 8 && somaColuna[j] != 285) { break; }
			}

			if (somaLinha[i] != 285) { break; }
		}
		instancia++;
		printf("Instancia %i\n", instancia);

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (somaMatriz[i][j] != 285) {
					solucao = 0;
				}
			}
    	}

		if (solucao == 1) {
			printf("SIM\n\n");
		} else {
			printf("NAO\n\n");
		}

		solucao = 1;
	}
    return 0;
}
