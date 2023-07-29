#include <stdio.h>
int main(){
	int velocidade;
	int distancia;
	printf("Digite a velocidade em Km/h:");
	scanf("%d",&velocidade);
	printf("Digite a distancia em km:");
	scanf("%d",&distancia);
	int tempo = distancia / velocidade;
	printf("O tempo em horas é: %d",tempo);
	return 0;
}
	
