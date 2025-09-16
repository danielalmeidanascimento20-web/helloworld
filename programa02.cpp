#include <stdio.h> //"caixa de ferramentas"

int main(){ //seria a f(x) do código
	int n1, n2;
	int soma, subtracao;
	
	printf("Projeto - operation \n \n");
	
	n1 = 33;
	n2 = 44;
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	
	printf("soma = %d \n", soma);
	printf("subtracao = %d \n", subtracao);
	
	//se e senão é:
	if(n1 > n2){
		printf("n1 e maior");
	}else{
		printf("n2 e maior ou igual");
	}
	
	return 0;
}
