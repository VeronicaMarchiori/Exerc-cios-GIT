
#include <stdio.h>

int somarVetor(int v[], int n) {
 if (n == 0)
  return 0;
 else
  return v[n-1] + somarVetor(v, n - 1);
}
int main() {
 int tamanho;
 printf("Tamanho do vetor: ");
 scanf("%d", &tamanho);
 int v[tamanho];
 for (int i = 0; i < tamanho; i++) {
  scanf("%d", &v[i]);
 }
 int soma = somarVetor(v, tamanho);
 printf("soma = %d", soma);

 return 0;
}
