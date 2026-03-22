#include <stdio.h>

int main() {
    
    float extra, falta, minutos;
    printf("Digite a quantidade de horas extras trabalhadas:\n");
    scanf("%f", &extra);
    printf("Digite a quantidad de horas faltadas:\n");
    scanf("%f", &falta);
    
    minutos = (extra - (2.0/3.0 * falta))* 60;
    
    if(minutos >= 2400){
        printf("Será obtido um bonus de 500 reais");
    }else if(minutos >= 1800 && minutos < 2400){
        printf("Será obtido um bonus de 400 reais");
    }else if(minutos >= 1200 && minutos < 1800){
        printf("Será obtido um bonus de 300 reais");
    }else if(minutos >= 600 && minutos < 1200){
        printf("Será obtido um bonus de 200 reais");
    }else{
        printf("Será obtido um bonus de 100 reais");
    }
    
    return 0;
}