#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Inicializa o gerador de n�meros aleat�rios com a hora atual
  srand(time(NULL));

  // Gera um n�mero aleat�rio entre 0 e RAND_MAX
  int rand = rand();

  // Multiplica o n�mero aleat�rio por 1000000 e arredonda para o inteiro mais pr�ximo
  rand = (int)((double)rand * 1000000 / RAND_MAX);

  // Imprime o n�mero aleat�rio gerado
  printf("%d\n", rand);

  return 0;
}