#include <stdio.h>

/*Fiz tudo junto nesse também!!!*/

typedef struct {
    int numer;
    int denomi;
} Fraction;

Fraction setFraction(int numer, int denomi) {
    Fraction fracao;
    fracao.numer = numer;
    fracao.denomi = denomi;
    return fracao;
}

Fraction multFraction(Fraction f1, Fraction f2) {
    Fraction resultado;
    resultado.numer = f1.numer * f2.numer;
    resultado.denomi = f1.denomi * f2.denomi;
    return resultado;
}

int main() {
int num1, den1, num2, den2;
    printf("fração 1: \n");
    printf("numerador: ");
    scanf("%d", &num1);
    printf("denominador: ");
    scanf("%d", &den1);
    printf("fração 2: \n");
    printf("numerador: ");
    scanf("%d", &num2);
    printf("denominador: ");
    scanf("%d", &den2);
    Fraction f1 = setFraction(num1, den1);
    Fraction f2 = setFraction(num2, den2);
    printf("%d/%d * \n", f1.numer, f1.denomi);
    printf("%d/%d\n", f2.numer, f2.denomi);
    Fraction resultado = multFraction(f1, f2);
    printf("= %d/%d\n", resultado.numer, resultado.denomi);
    return 0;
}
