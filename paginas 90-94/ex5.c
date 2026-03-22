#include <stdio.h>

int main()
{
    int escolha;
    int num1, num2;
    int diferenca, produto;
    float divisao, media;
    
    printf("Escolha a operação a ser feita:\n");
    printf("1 Média entre os números digitados.\n");
    printf("2 Diferença do maior pelo menor.\n");
    printf("3 Produto entre os números digitados.\n");
    printf("4 Divisão do primeiro pelo segundo.\n");
    scanf("%d", &escolha);
    
    printf("Digite os dois numeros:\n");
    scanf("%d %d", &num1, &num2);
        
    if(escolha == 1){
        media = (num1 + num2) / 2;
        printf("A media dos dois numeros e: %.2f", media);

    }else if(escolha == 2){
        if(num1 > num2){
            diferenca = num1 - num2;
        }else{
            diferenca = num2 - num1;
        }
        printf("A diferenca entre os numeros e: %d", diferenca);
        
    }else if(escolha == 3){
        produto = num1 * num2;
        printf("O produto entre os numero e: %d", produto);

    }else if(escolha == 4){
        if(num2 == 0){
            printf("Nao pode ser divisivel por 0");
        }else{
            divisao = num1 / num2;
            printf("A divisao entre os numeros e: %.2f", divisao);
        }

    }else{
        printf("Opcao invalida.");
    }

    return 0;
}