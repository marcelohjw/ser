#include <stdio.h>

int main(void) {
     char asteriscosLinha;
     int i, j, linhas;
     printf("Digite quantas linhas e quantas asteriscos deseja obter:\n");
     scanf("%d %c", &linhas, &asteriscosLinha);
     for (i = 1; i <= linhas; i++)
     {
         switch(asteriscosLinha) {
             case '3': {
                printf("***");
                break;
             }
             case '2': {
                printf("**");
                break;
             }
             case '1': {
                 printf("*");
             }
             case '4': {
                printf("****");
                break;
             }
             case '5': {
                printf("*****");
                break;
             }
             case '6': {
                printf("******");
                break;
             }
             case '7': {
                printf("*******");
                break;
             }
             case '8': {
                printf("********");
                break;
             }
             case '9': {
                printf("*********");
                break;
             }
         }
         printf("\n");
     }
     return 0;
 }