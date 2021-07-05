#include <stdio.h>

int main(void)    {
  char pergunta;
  int bolo, coxinha, pamonha;
  bolo = coxinha = pamonha = 0;
  int i;
  printf("Digite quais ingredientes: (b)= Bolo; (c)=Coxinha; (p)=Pamonha; (f)=Exibir extrato;\n");
  while (pergunta != 'F') {
    scanf("%c", &pergunta);
    i++;
  }

  for(int v = 0; v < i; v++) {
    if(pergunta == 'B') {
      bolo++;
    }
    else if(pergunta == 'C') {
      coxinha++;
    }
    else if(pergunta == 'P') {
      pamonha++;
    }
  }
  printf("Bolo: %d\n", bolo);
  printf("Coxinha: %d\n", coxinha);
  printf("Pamonha: %d\n", pamonha);
  return 0;
}
