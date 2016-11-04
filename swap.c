#include <stdio.h>

//La función swap lo que hará es que dada dos direcciones de memoría como parametro,
//intercambiará el contenido de las variables pasadas.
void swap(int *a, int *b){
  
  int aux = *a;
  *a = *b;
  *b = aux;
}

int main(){

  printf("Swap\n");
  printf("%s\n\n%s\n", "Swap:", "Valores que vamos a intecambiar:");
  printf("%s%d\n%s%d\n", "a = ", a, "b = " , b);
  printf("--------------\n");
  //El operador "&" llamado operador de referencia ya que cuando es precedido de una
  //variable éste nos dará la dirección de memoria.
  swap(&a, &b);
  printf("%s\n%s%d\n%s%d\n", "Luego del intercambio:", "a = ", a, "b = ", b);
  return 0;
  
  return 0;
}