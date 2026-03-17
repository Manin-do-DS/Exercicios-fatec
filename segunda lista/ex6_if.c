#include <stdio.h>

int main(){
    int num, r;

    printf("digite um numero:");
    scanf("%d", &num);
    r = num%2;
    
    if(r == 0){
    	printf("O numero e par.");
	}else{
		printf("O numero e impar.");
	}
    return 0;
}