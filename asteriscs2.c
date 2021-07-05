#include <stdio.h>

int main(void) {
     int i, j, linhas, asteriscosLinha;
     scanf("%d", &linhas);
     for (i = 0; i < linhas; i++)
     {
         scanf("%d", &asteriscosLinha);
         for(int i=0; i<asteriscosLinha; i++) {
            printf("*");
         }
         printf("\n");
     }
     return 0;
 }