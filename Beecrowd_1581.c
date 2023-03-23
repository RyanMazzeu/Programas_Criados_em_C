/*
Conversa Internacional
Rafael recentemente recebeu uma bolsa de estudos e está fazendo intercâmbio fora do Brasil, onde conheceu várias pessoas de várias nacionalidades diferentes. O idioma nativo desse país é o Inglês, e todas as pessoas que Rafael conheceu falam inglês como primeira ou segunda língua.
Como aprender um segundo idioma é uma tarefa difícil e cansativa, as pessoas preferem falar seu idioma nativo sempre que possível. Uma exceção à essa regra é quando há duas pessoas no grupo que não tem o mesmo idioma nativo. Nesse tipo de situação, o idioma utilizado é o inglês.

Por exemplo, se em um grupo há só brasileiros, o idioma falado será o português, mas caso haja um espanhol entre os brasileiros, o idioma falado será o inglês.

Rafael as vezes fica confuso sobre qual idioma deveria ser falado em cada grupo de pessoas, e para isso pediu sua ajuda.

Entrada
A primeira linha contém um inteiro N, indicando o número de casos de testes a seguir.
Cada caso de teste inicia com um inteiro K (2 ≤ K ≤ 100), representando o número de pessoas no grupo. Em seguida haverá K linhas, contendo uma string S cada, representando o idioma nativo de cada uma dessas K pessoas.
Cada string conterá no mínimo 1 e no máximo 20 caracteres, entre eles apenas letras minúsculas (a-z).
Saída
Imprima uma linha, contendo uma string S, representando o idioma mais apropriado para a conversa.*/

int main()
{
    int N,K,qtd;
    char l[100][20];
    scanf("%d",&N);
    while(N>0)
    {
        scanf("%d",&K);
        //cout<<K<<endl;
        for(int i=0; i<K; i++)
        {
            scanf("%s",l[i]);
        }
        qtd=0;
        for(int i=0; i<K; i++)
        {
            if((strcmp(l[0],l[i])!=0))
            {
                qtd=1;
            }
        }
        if(qtd==1)
        {
            printf("ingles\n");

        }
        else
        {
            printf("%s\n",l[0]);
        }
        N--;
    }
    return 0;
}
