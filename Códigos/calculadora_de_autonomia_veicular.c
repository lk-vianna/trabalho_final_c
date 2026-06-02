#include <stdio.h>

int main() {
    float litros, consumo, autonomia;

    printf("Digite a quantidade de combustível no tanque (L): ");
    scanf("%f", &litros);

    printf("Digite o consumo médio do veículo (km/L): ");
    scanf("%f", &consumo);

    autonomia = litros * consumo;

    printf("\nAutonomia: %.2f km\n", autonomia);

    return 0;
}