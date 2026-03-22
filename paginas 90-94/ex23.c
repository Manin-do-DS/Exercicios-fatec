#include <stdio.h>

int main()
{
    int codigo, quant;
    float total, desc;
    printf("digite o codigo do produto:\n");
    scanf("%d", &codigo);
    printf("digite quantos produtos foram comprados:\n");
    scanf("%d", &quant);
    
       if(codigo >= 1 && codigo <= 10){
           total = quant * 10;
           printf("cada produto vale: 10 reais\n");
       }else if(codigo >= 11 && codigo <= 20){
           total = quant * 15;
           printf("cada produto vale: 15 reais\n");
       }else if(codigo >= 21 && codigo <= 30){
           total = quant * 20;
           printf("cada produto vale: 20 reais\n");
       }else if(codigo >= 31 && codigo <= 40){
           total = quant * 30;
           printf("cada produto vale: 30 reais\n");
       }else{
           printf("produto nao existe.");
           return 0;
       }
      
       
        if(total < 250){
            desc = total - (total * 0.05);
            printf("Valor do desconto a ser aplicado: 5%\n");
        }else if(total >= 250 && total <= 500){
            desc = total - (total * 0.10);
            printf("Valor do desconto a ser aplicado: 10%\n");
        }else{
            desc = total - (total * 0.15);
            printf("Valor do desconto a ser aplicado: 15%\n");
        }
        
        printf("Valor total: %.2f\n", total);
        printf("Valor final com desconto: %.2f\n", desc);
       
       
    return 0;
}