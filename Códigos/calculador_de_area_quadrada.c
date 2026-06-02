#include <stdio.h>

int main() {
    float larg, alt, area;
    
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &larg);
    
    printf("Digite a altura do terreno (em metros): ");
    scanf("%f", &alt);
    
    area = larg * alt;
    
    printf("\nÁrea do terreno: %.2f m²\n", area);
    
    return 0;
}