#include <stdio.h>

int main()
{
  int base;
  int altura;
  int area;

  printf("Informe o valor da base: \n");
  scanf("%i", &base);
  printf("Informe o valor da altura: \n");
  scanf("%i", &altura);

  area = base * altura;
  printf("A area total e: %i\n", area);

  return 0;
}

