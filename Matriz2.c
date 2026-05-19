#include <stdio.h>

int main(){
	int alunos[3][3];
	int menor[3], quant[3]= {0};
	
	printf("Digite as notas dos alunos nas provas:\n");
	for(int i = 0; i < 3; i++){
		printf("Aluno %d\n", i + 1);
		for(int p = 0; p < 3; p++){
			scanf("%d", &alunos[i][p]);
		}
	}
	
	
	
	for(int i = 0; i < 3; i++){
		menor[i] = alunos[i][0];
		int pmenor = 0;
		
		for(int p = 0; p < 3; p++){			
			if(alunos[i][p] < menor[i]){
			 menor[i] = alunos[i][p];
             pmenor = p;
			}
		}
		quant[pmenor]++;
	}

printf("Menores nota:\n");
for(int i = 0; i < 3; i++){
			printf("aluno %d, nota:%d\n", i + 1, menor[i]);
	}
printf("Quantidade de nota baixa em cada prova:\n");	
for(int i = 0; i < 3; i++){
			printf("prova %d, quantidade:%d\n", i + 1, quant[i]);
	}
	return 0;
}