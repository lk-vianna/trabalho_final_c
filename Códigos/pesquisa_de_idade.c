#include <stdio.h>

int main() {
    int qntd, jovem = 0, adulto = 0, idoso = 0;
    
    printf("Insira a quantidade de pessoas entrevistadas: ");
    scanf("%d", &qntd);
    
    int idade [qntd];
    
    for (int i = 0; i < qntd; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        
        if (idade[i] >= 18 && idade[i] < 35){
            jovem++;
        }else if (idade[i] >= 35 && idade[i] < 65){
            adulto++;
        }else if (idade[i] >= 65){
            idoso++;
        }
    }
    
    printf("De %d pessoas entrevistadas, há:\n", qntd);
    printf("Jovens: %d\n", jovem);
    printf("Adulto: %d\n", adulto);
    printf("Idoso: %d\n", idoso);
    
    return 0;
}