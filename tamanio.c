#include <stdio.h>

int main()
{
  //Se usa la etiquete embebida %lu ya que la función sizeof regresa un unsigned long.
  printf("El tipo de short tiene tamaño %lu bytes\n", sizeof(short));
  printf("El tipo de int tiene tamaño %lu bytes\n", sizeof(int));
  printf("El tipo de unsigned int tiene tamaño %lu bytes\n", sizeof(unsigned int));
  printf("El tipo de apuntador a int tiene tamaño %lu bytes\n", sizeof(int*));
  printf("El tipo de char tiene tamaño %lu bytes\n", sizeof(char));
  printf("El tipo de float tiene tamaño %lu bytes\n", sizeof(float));
  printf("El tipo de double tiene tamaño %lu bytes\n", sizeof(double));

  return 0;
}