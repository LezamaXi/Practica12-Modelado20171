//<stdio.h> Biblioteca encagada de las opereaciones de entrada y salida.
#include <stdio.h>
//Se incluye para obtener las funciones de srand y rand
#include <stdlib.h>
//Se incluye para la función time que será usada al momento de generar la semilla. 
#include <time.h>

//Crea el intercambio de los elementos del arreglo
void swap(int arr[], int i, int j)
{
  int aux = arr[i];
  arr[i] = arr[j];
  arr[j] = aux;
}

//Funcion que ordena utilizando el algoritmo de bubble_sort
void bubble_sort(int arr[], int n)
{
  int i = 0, j = 0;
  for(i = 0; i < n-1; i++){
    for(j = 0; j < n-i-1; j++){
      if(arr[j] > arr[j+1]){
	swap(arr, j, j+1);
      }
    }
  }
}


int main()
{
  int arr[9];
  srand(time(NULL));

  for(int i = 0; i < 9; i++){
    //La función rand regresa un pseudo nÚmero aleatorio entre en el rango
    arr[i] = rand() % 99;
  }

  printf("Lista desordenada\n");

  for(int i = 0; i < 9; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  bubble_sort(arr, 9);
  printf("Lista ordenada\n");
  for(int i = 0; i < 9; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  
  return 0;
}