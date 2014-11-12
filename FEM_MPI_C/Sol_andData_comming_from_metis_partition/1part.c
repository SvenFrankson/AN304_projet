#include <stdio.h>

int main()
{
  FILE* f = fopen("Mesh.Data", "r");
  int nb_elements;
  fscanf(f, "%d", &nb_elements);
  printf("%d", nb_elements);
}
