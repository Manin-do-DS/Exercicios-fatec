#include <stdio.h>

int main(){
	int M[2][2];
	int maior, R[2][2];
	
	printf("Digite os 4 numeros da primeira matriz:\n");
	for(int i = 0; i < 2; i++){
		for(int p = 0; p < 2; p++){
			scanf("%d", &M[i][p]);
		}
	}
	maior = M[1][1];
	
	for(int i = 0; i < 2; i++){
		for(int p = 0; p < 2; p++){
			if(M[i][p] > maior){
			 maior = M[i][p];
			}
		}
	}
	printf("A matriz multiplicado por seu maior elemento e:\n");
	for(int i = 0; i < 2; i++){
		for(int p = 0; p < 2; p++){
			R[i][p] = maior * M[i][p];
			printf("%d\n", R[i][p]);
		}
	}
	
	
	return 0;
}