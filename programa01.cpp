#include <stdio.h> //"caixa de ferramentas"

int main(){ //seria a f(x) do c�digo
	int numero1;
	int numero2; // seria o x da f(x)
	int auxiliar;
	
	numero1 = 10; //variavel recebe numero
	numero2 = 5;
	auxiliar = numero1 + numero2;
	printf("%d \n", auxiliar); // o %d � uma das formas do computaor imprimir o n�mero e o \n � o contra barra
	// se estiver entre aspas ("") � texto
	printf("A soma de %d + %d = %d", numero1, numero2, auxiliar);
	
	return 0;
}
