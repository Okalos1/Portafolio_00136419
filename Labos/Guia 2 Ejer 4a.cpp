#include <iostream>
#include <cmath>
using namespace std;

float picalculo(int n, long double suma){
    if (n==0){
        return suma;
    }else{
        return suma+(((pow(-1,n+1))/((2*n)-1)))+picalculo(n-1,suma);
    }
    
}
int main() {
    
    int l=0;
    cout<<"¿Cuántas veces desea que se realice la sumatoria?"<<endl;
    cout<<"No veces: ";
    cin>> l;
    cout<<"Valor de Pi="<<4*picalculo(l,0)<<endl;

    return 0;
}

