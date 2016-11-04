#include <stdio.h>

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);
void misterio2(void (*fun) (int), int);
int cuadrado_num(int);
void imprime_num(int);

int main()
{

//Crea un apuntador a función que regresará un entero y tomará un argumento.
  int (*fun1) (int);
//Crea un apuntador a función que no regresará nada y tomará un argumento.
  void (*fun2) (int);
//Se hace que el apuntador hacia la dirección de memoria
  fun1 = &cuadrado_num;
  fun2 = &imprime_num;

//Variable que es 9. Ya que la función misterio1 recibe como primer
//parámetro una un apuntador a una función y regresa el cuadrado del numero en esta caso 3.
  int var = misterio1(fun1, 3);
//Imprime 9.
  misterio2(fun2, var);
}


int misterio1(int (*fun) (int), int num)
{
    return fun(num);
}

void misterio2(void (*fun) (int), int num)
{
    fun(num);
}

int cuadrado_num(int num)
{
    return num * num;
}

void imprime_num(int num)
{
    printf("Tada: %d\n", num);
}
