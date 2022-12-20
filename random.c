#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Inicializa o gerador de números aleatórios com a hora atual
  srand(time(NULL));

  // Gera um número aleatório entre 0 e RAND_MAX
  int rand = rand();

  // Multiplica o número aleatório por 1000000 e arredonda para o inteiro mais próximo
  rand = (int)((double)rand * 1000000 / RAND_MAX);

  // Imprime o número aleatório gerado
  printf("%d\n", rand);

  return 0;
}