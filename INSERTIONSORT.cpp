// Programa C ++ para la ordenaci�n por inserci�n
#include <bits/stdc++.h> 
using namespace std; 
  
//Funci�n para ordenar un array usando insertionSort
void insertionSort(int arr[], int n)  
{  
    int caja, j;  //j es al anterior del arr
    for (int i = 1; i < n; i++) 
    {  
        caja = arr[i];  
        j = i - 1;  
  
         /* Mover elementos de arr [0..i-1], que son
         mayor que la clave, a una posici�n por delante
         de su posici�n actual */
        while (j >= 0 && arr[j] > caja) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  //cambiar de pocicion hasta que j sea -1
        }  
        arr[j + 1] = caja;  
    }  
}  
  

void mostrar(int arr[], int n)  // Una funci�n de utilidad para imprimir una matriz de tama�o n 
{   
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
int main()  
{  
    int arr[] = { 12, 11, 13, 5, 6 };  
    int n = 5; 
  
    insertionSort(arr, n);  
    mostrar(arr, n);  
  
    return 0;  
}

