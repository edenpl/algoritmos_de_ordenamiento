#include <iostream>
using namespace std;

void countSort(int array[], int size) {
/*// El tamaño del recuento debe ser al menos (max + 1) pero
 // no podemos asignar declararlo como int count (max + 1) en C ++ como
 // no es compatible con la asignación de memoria dinámica.
 // Entonces, su tamaño se proporciona estáticamente.*/
  int output[10];
  int count[10];
  int max = array[0];
// Encuentra el elemento más grande del array
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }
// Inicializa la matriz de conteo con todos los ceros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
// Almacenar el recuento de cada elemento
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }
// Almacenar el recuento acumulativo de cada  array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
// Encuentra el índice de cada elemento de la matriz original en la matriz de conteo, y
// coloca los elementos en la matriz de salida
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }
// Copie los elementos ordenados en la matriz original
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Función para imprimir una  array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
  int array[] = { 1, 4, 1, 2, 7, 5, 2};
  int n = 7;
  countSort(array, n);
  printArray(array, n);
}
