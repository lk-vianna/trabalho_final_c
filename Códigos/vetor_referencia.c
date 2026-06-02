#include <stdio.h>

int main() {
    int vet[10], ref, cont = 0;
    
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    printf("\nDigite o valor de referência: ");
    scanf("%d", &ref);
    
    printf("\nNúmeros maiores que %d: ", ref);
    for (int i = 0; i < 10; i++) {
        if (vet[i] > ref) {
            printf("%d ", vet[i]);
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (vet[i] == ref) {
            cont++;
        }
    }
    
    printf("\n\nO valor %d aparece %d vez(es) no vetor.\n", ref, cont);
    
    return 0;
}