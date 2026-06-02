#include <stdio.h>

int main() {
    int numb;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numb);
    
    printf("\nAntecessor: %d | Número: %d | Sucessor: %d", numb-1,numb,numb+1);
    
    return 0;
}