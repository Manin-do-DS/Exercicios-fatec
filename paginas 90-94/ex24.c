#include <stdio.h>

int main() {
    float preco, aumento = 0, imposto = 0, novo_preco;
    int categoria;
    char situacao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a categoria (1 limpeza, 2 alimentacao, 3 vestuario): ");
    scanf("%d", &categoria);

    printf("Digite a situacao (R refrigeracao, N nao refrigerado): ");
    scanf("%c", &situacao);

    if (preco <= 25) {
        if (categoria == 1)
            aumento = preco * 0.05;
        else if (categoria == 2)
            aumento = preco * 0.08;
        else if (categoria == 3)
            aumento = preco * 0.10;
    } else {
        if (categoria == 1)
            aumento = preco * 0.12;
        else if (categoria == 2)
            aumento = preco * 0.15;
        else if (categoria == 3)
            aumento = preco * 0.18;
    }

    if (categoria == 2 || situacao == 'R' || situacao == 'r') {
        imposto = preco * 0.05;
    } else {
        imposto = preco * 0.08;
    }

    novo_preco = preco + aumento - imposto;

    printf("\nAumento: %.2f\n", aumento);
    printf("Imposto: %.2f\n", imposto);
    printf("Novo preco: %.2f\n", novo_preco);

    if (novo_preco <= 50) {
        printf("Classificacao: Barato\n");
    } else if (novo_preco < 120) {
        printf("Classificacao: Normal\n");
    } else {
        printf("Classificacao: Caro\n");
    }

    return 0;
}