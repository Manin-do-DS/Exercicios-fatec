#include <stdio.h>

int main()
{
    int custo, preco;
    printf("digite o custo de fabrica do carro:\n");
    scanf("%d", &custo);
    if(custo < 12000) {
        preco = custo + (custo * 0.05);
        printf("o preco do carro e: %d", preco);
    }else if(custo >= 12000 && custo <= 25000){
        preco = custo + (custo * 0.10)+(custo * 0.15);
        printf("o preco do carro e: %d", preco);
    }else{
        preco = custo + (custo * 0.15)+(custo * 0.20);
        printf("o preco do carro e: %d", preco);
    }
    
    return 0;
}