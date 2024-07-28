#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade = 0;
	int ano = 1950;
	
	printf("Digite uma idade e o ano: \n");
	scanf("%d %d", &idade, &ano);
	
	printf("Idade informada: %d. \n", idade);
	printf("Ano informada: %d. \n", ano);
	
	system("pause");
}
