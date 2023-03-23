/*
Compras em FdI
Está chegando a grande final do Campeonato Nlogonense de Surf Aquático. Ano que vem, a final ocorrerá na cidade de Foça do Iguachim (FdI)! A região de FdI e das cidades próximas é famosa por seu comércio, composto por diversas lojas que costumam vender diversos produtos a preços mais atraentes que no restante do país. Você quer aproveitar a viagem para FdI para comprar o novo celular Aifôni (R) (Na verdade, você queria um Sãosunga (R), mas este celular é um verdadeiro estouro!)!
Existem N lojas na região, numeradas de 1 a N. Todas as lojas vendem o celular, embora o preço do aparelho pode ser diferente em cada loja. Para não tornar sua viagem cansativa, você pode considerar não visitar todas as N lojas, mas sim visitar apenas as lojas entre duas dadas lojas i e j, inclusive. Você está interessado na maior diferença de preços do aparelho entre as lojas visitadas. A diferença é dada por |M - m|, onde M é o maior preço dentre as lojas visitadas, e m é o menor.
Além disso, as lojas podem alterar o preço do celular como desejarem! Sua tarefa é determinar, para várias consultas, a maior diferença de preços nas lojas entre duas dadas lojas, considerando também eventuais alterações de preços nas lojas.
Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém o inteiro N (1 ≤ N ≤ 105). A segunda linha contém N inteiros p1,p2,...,pN (1 ≤ pi ≤ 105). O inteiro pi indica o preço inicial do celular na loja i. A terceira linha contém um inteiro Q (1 ≤ Q ≤ 105), o número de operações. As próximas Q linhas descrevem uma operação cada. Cada operação pode ser descrita de duas formas:
1 i p (1 ≤ i ≤ N, 1 ≤ p ≤ 105), indicando que o preço do celular foi alterado para p na loja i.
2 i j (1 ≤ i ≤ j ≤ N), indicando uma consulta.
A entrada termina com fim-de-arquivo (EOF).
Saída
Para cada caso de teste, imprima uma linha para cada consulta contendo a maior diferença de preços das lojas entre as lojas i e j, inclusive.
*/

#include <cstdio>
#include <algorithm>
#include <vector>
#define INF 9999999
#define INFNEG -9999999

using namespace std;

int tree[300010][2];
int vet[100010];
int folhas[100010];

typedef vector<int> vi ;

void build(int no , int a , int b )
{
	if (a > b) return ;
	if (a == b){
		tree[no][0] = vet[a];
		tree[no][1] = vet[a];
		folhas[a] = no ;
		return ;
	}
	build( no << 1 , a , (a+b)>>1);
	build( (no << 1) + 1 , ((a + b)>>1) +1 , b);
	tree[no][0] = min(tree[no<<1][0],tree[(no<<1) +1][0]);
	tree[no][1] = max(tree[no<<1][1],tree[(no<<1) +1][1]);	
}

void att(int no)
{
	if (no == 0) return ;
	tree[no][0] = min(tree[no<<1][0],tree[(no<<1)+1][0]);
	tree[no][1] = max(tree[no<<1][1],tree[(no<<1)+1][1]);
	if (no != 1) att(no>>1);
}

pair<int,int> query(int no , int a , int b , int i , int j)
{
	if (a > b || a > j || b < i)
		return make_pair(INF,INFNEG);
	if (i <= a && b <= j)
		return make_pair(tree[no][0],tree[no][1]);
	pair<int,int> p1 = query((no << 1)    ,      a         , (a+b)>>1, i , j );
	pair<int,int> p2 = query((no << 1) + 1, ((a+b)>>1) + 1 ,     b   , i , j);
	return make_pair(min(p1.first,p2.first),max(p1.second,p2.second));		
}

int main()
{
	int n;
	int  x , y , aux , q;
	pair<int , int> par ;
	int cont = 0;
	while(scanf("%d",&n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&vet[i]);
		}
		
		build(1, 0, n-1 );
		
		scanf("%d",&q);
		
		for(int i = 0 ; i < q ; i ++)
		{
			scanf("%d %d %d", &aux , &x , &y);
			if (aux == 1)
			{
				tree[folhas[x-1]][0] = y;
				tree[folhas[x-1]][1] = y;
				att(folhas[x-1]>>1);
			}
			else
			{
				par = query(1,0,n-1,x-1,y-1);
				printf("%d\n",par.second-par.first);
			}
		}
	}

}
