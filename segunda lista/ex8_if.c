#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, soma, raiz, op;
    printf("MENU\n");
    printf("1- somar dois numeros.\n");
    printf("2- raiz quadrada de um numero.\n");
    printf("Digite sua opcao");
    scanf("%d", &op);
    if (op == 1){
    	printf("Digite o primeiro numero:");
    	scanf("%d", &num1);
    	printf("Digite o segundo numero:");
    	scanf("%d", &num2);
    	soma = num1 + num2;
    	printf("A some de %d e %d e igual a: %d",num1,num2,soma);
	}else if(op == 2){
		printf("Digite o valor:");
		scanf("%d", &num1);
		raiz = sqrt(num1);
		printf("A raiz quadrada de %d e: %d",num1,raiz);
	}else{
		printf("Opcao invalida");
	}
}