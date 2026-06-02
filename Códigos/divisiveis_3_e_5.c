#include <stdio.h>

int main() {
    int number, cont = 0;
    
    for (int i = 1; i <= 10; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &number);
        
        if (number % 3 == 0 && number % 5 == 0){
            cont++;
        }
    }
    
    printf("\nQuantidade de numeros divisiveis por 3 e 5 ao mesmo tempo: %d\n", cont);
    
    return 0;
}