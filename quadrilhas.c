#include <stdio.h>

int main(void) {
     int i, j, quadrilhas, notas;
     printf("Quantas quadrilhas irão participar?\n");
     scanf("%d", &quadrilhas);
     for (i = 0; i < quadrilhas; i++)
     {
         for(int i=0; i<2; i++) {
            printf("-------------\n");
            printf("Nota\n");
         }
         printf("\n");
     }
     return 0;
 }