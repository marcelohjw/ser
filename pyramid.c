#include <stdio.h>
int main() {
   int i, j, colunas;
   printf("------ A Semi pirâmide ------\n");
   printf("Digite o número de colunas: ");
   scanf("%d", &colunas);
   for (i = 1; i <= colunas; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}