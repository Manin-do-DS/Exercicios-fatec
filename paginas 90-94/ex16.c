#include <stdio.h>

int main()
{
    int codigo, preco, total;
    printf("digite o codigo do produto:\n");
    scanf("%d", &codigo);
    printf("digite o preco do produto:\n");
    scanf("%d", &preco);
    
    if(preco < 30){
        printf("o produto de codigo %d não possui desconto.\n", codigo);
        printf("o total é: %d", preco);
    }else if(preco >= 30 && preco <= 100){
        total = preco - (preco * 0.10);
        printf("O produto de codigo %d possui 10%% de desconto.\n", codigo);
        printf("o total é: %d", total);
    }else{
        total = preco - (preco * 0.15);
        printf("O produto de codigo %d possui 15%% de desconto.\n", codigo);
        printf("o total é: %d", total);
    }
    
    
    return 0;
}