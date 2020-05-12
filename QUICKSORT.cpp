#include<iostream>
#define largo 100

using namespace std;
void muestraCadena(int cant,int n[]){
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<" ";
    }
}
void quicksort(int A[],int izq, int der ){ 
	int i, j, x , aux; 
	i = izq; 
	j = der; 
	x = A[ (izq + der) /2 ]; 
    do{ 
        while( (A[i] < x) && (j <= der) )
        { 
            i++;
        } 
        while( (x < A[j]) && (j > izq) )
        { 
            j--;
        } 
        if( i <= j )
        { 
            aux = A[i]; A[i] = A[j]; A[j] = aux; 
            i++;  j--; 
        } 
    }while( i <= j ); 
 
    if( izq < j ) 
        quicksort( A, izq, j ); 
    if( i < der ) 
        quicksort( A, i, der ); 
}
int main () {
    int A[]={ 42, 124, 23, 5, 89, -1, 44, 643, 34},n=9;
    quicksort(A,0,n-1);
    muestraCadena(n,A);
    return 0;
}
