#include <stdio.h>

int main() {
    int contador = 0;
    float soma = 0.0, valor;
    
    printf("Digite até 20 números para calcular a média:\n");
    
    while (contador < 20) {
        scanf("%f", &valor);
        soma += valor;
        contador++;
    }
    
    printf("A média dos valores inseridos é %.2f\n", soma / contador);
    
    return 0;
}
