#include <stdio.h>
int calcularPotencia(int base, int expoente) {
    if (expoente == 0)
        return 1; 
    else if (expoente == 1)
        return base;
    else
        return base * calcularPotencia(base, expoente - 1); 
}
int main() {
    int base;
    int expoente;
    scanf("%d %d", &base, &expoente);
    int resultado = calcularPotencia(base, expoente);
    printf("%d ^ %d = %d\n", base, expoente, resultado);
    return 0;
}
