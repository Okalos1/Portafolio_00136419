#include<iostream>
using namespace std;

struct nodo{
int num;
nodo *ant;
nodo *sig;


nodo *crear(nodo *bac, int d){
nodo *nuevo= new nodo;
nuevo->num=d;
nuevo->ant=NULL;
nuevo->sig=NULL;
bac=nuevo;
return bac;
}
nodo *insertar(nodo *bac, int d){
nodo *nuevo= new nodo;
nuevo->num=d;
nuevo->ant=NULL;
nuevo->sig=bac;
bac->ant=nuevo;
bac=nuevo;
return bac;
}

void mostrar(nodo *bac){
nodo *auxiliar=bac;
while(auxiliar !=NULL){
cout<<auxiliar->num<<endl; 
auxiliar=auxiliar->sig;
}
}
void mostrar2(nodo *bac){
nodo *auxiliar=bac;
while(auxiliar->sig!=NULL){
auxiliar=auxiliar->sig;
}
while(auxiliar !=NULL){
cout<<auxiliar->num<<endl; 
auxiliar=auxiliar->ant;
}
}
};

int main(void){

nodo *bac=NULL;
nodo *p;
bac=p->crear(bac,40);
bac=p->insertar(bac,30);
bac=p->insertar(bac,20);
    bac=p->insertar(bac,10);
    cout<<"nums de la lista"<<endl;
p->mostrar(bac);
cout<<"nums de la lista inversos"<<endl;
p->mostrar2(bac);

return 0;
}