#include <stdio.h>

int main(void) {
     int i, j, quadrilhas;
     int notas[3] = {6, 3, 2};
     printf("Quantas quadrilhas irão participar?\n");
     scanf("%d", &quadrilhas);
     for (i = 0; i < quadrilhas; i++)
     {
        printf("Quadrilha %d ", i+1);
        printf("-------------\n");
        for (j = 0; j <= 2; j++) {
            printf("Nota Jurado ");
            printf("%d = %d\n", j+1, notas[j]);
        }
        printf("\n");
     }
     return 0;
 }