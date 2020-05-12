// Programa C ++ para la implementación del tipo de selección 
#include <iostream> 
using namespace std; 
void selectionSort(int arr[], int n)  
{  	
	int aux,min;//aux donde guarda el auxilar, min el mimero minimo hasta ahora
	
	for(int i=0;i<n;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		aux = arr[i];
		arr[i] = arr[min];
		arr[min] = aux;
	} 
}
void mostrar(int arr[], int n)  
{   
    for (int i=0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = 5;  
    selectionSort(arr, n);  
    mostrar(arr, n);  
    return 0;  
} 
