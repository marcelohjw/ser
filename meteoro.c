#include <stdio.h>

int main(void) {

    int i, linhas, hora, temperatura_vencedora;
    float t1, t2, diferenca_past, diferenca;
    diferenca = 0;

    scanf("%d", &linhas);

    for(i = 1; i<=linhas; i++) {
        scanf("%d %f %f", &hora, &t1, &t2);
        diferenca = t1 - t2;
        //printf("%f", diferenca);
        if(diferenca > diferenca_past) {
            temperatura_vencedora = hora;
        }
        diferenca_past = diferenca;
        //printf("%f", diferenca_past);
    }
    printf("%d", temperatura_vencedora);


    return 0;
}