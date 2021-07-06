#include <stdio.h>

int main(void) {
     int i, j, quadrilhas, vencedor;
     float nota0, nota1, nota2, media, resu;
     scanf("%d", &quadrilhas);
     for (i = 0; i < quadrilhas; i++)
     {
        scanf("%f %f %f", &nota0, &nota1, &nota2);
        media = (nota0 + nota1 + nota2) / 3;
        //printf("Média Quadrilha %d = %.2f\n", i+1, media);
        if(media > resu) {
            resu = media;
            vencedor = i + 1;
        }
     }
     printf("Vencedor:%d\n", vencedor);
     printf("Nota:%.2f", resu);
     return 0;
 }