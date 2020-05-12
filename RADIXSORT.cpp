#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
void Radix(int [] , int );
void print(int [] , int);

vector< vector <int> > Vec;

int main()
{

    int NumeroDeElemtos= 8;
    int Numeros[]={170, 45, 75, 90, 2, 802, 2, 66};
    Radix(Numeros,NumeroDeElemtos);
}

void Radix(int a[] , int n){
    Vec.resize(10);
    int temp , m=0;

    for(int i=0;i<7;i++){
        for(int j=0;j<n;j++){
              temp= (int)(a[j]/pow(10,i))%10;
              Vec[temp].push_back(a[j]);
        }

       for(int k=0;k<10;k++)
       {
            for(int l=0;l<Vec[k].size();l++){
                a[m]=Vec[k][l];
                m++;

            }
            Vec[k].clear();
       }
        m=0;
    }

    print(a,n);
}
void print(int a[] , int tam)
	{
        for(int i=0;i<tam;i++)
            cout<<a[i]<<" ";
	}
