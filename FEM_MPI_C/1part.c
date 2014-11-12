#include <stdio.h>

int main()
{
  FILE* f = fopen("Mesh.Data", "r");
  int nb_elements;
  fscanf(f, "%d", &nb_elements);
  fclose(f);
  
  printf("%d\n", nb_elements);

  FILE* f2 = fopen("Mesh.Data", "a");
  for(int i = 0; i < nb_elements; ++i)
    {
      fprintf(f2, "0\n");
    }
  fclose(f2);
}
