#include <stdio.h>

int main() {
    int linhas, colunas, i, j, soma = 0;
    
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);
    
    int matriz[linhas][colunas];
    
    printf("\nDigite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++){
        for (j = 0; j< colunas; j++){
            printf("Elemento [%d][%d]: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    printf("\nMatriz digitada:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSomatório dos elementos = %d\n", soma);
    return 0;
}