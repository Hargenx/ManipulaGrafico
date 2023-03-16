#include <stdio.h>

int main() {
  // Definir os dados do gráfico
  int data[] = {2, 1, 3, 2, 4};
  int n = sizeof(data) / sizeof(data[0]);

  // Imprimir o gráfico em ASCII art
  printf("Grafico de barras:\n");
  int i = 0;
  for (; i < n; i++) {
    printf("%d |", data[i]);
    int j = 0;
    for (; j < data[i]; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
