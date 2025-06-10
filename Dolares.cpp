#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float cotacao,dinheiro,dolares;
	printf("qual a cotacao do dolar hoje?");
	scanf("%f",&cotacao);
	printf("quanto dinheiro em reais deseja converter?");
	scanf("%f",&dinheiro);
	dolares=dinheiro/cotacao;
	printf("seu dinhero vale %.2f dolares",dolares);
}


