#include <stdio.h>

int main(void) {

    int i, horas;
    scanf("%d", &horas);

    for(i = 0; i<horas; i++) {
        printf("Hora %d\n", i+1);
    }

    return 0;
}