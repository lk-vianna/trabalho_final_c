#include <stdio.h>

int main() {
    int n, par = 0, impar = 0;
    
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    int vet[n];
    
    for (int i = 0; i < n; i++){
        printf("\nDigite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
        
        if (vet[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    
    printf("\nPares: %d", par);
    printf("\nÍmpares: %d", impar);
    
    return 0;
}