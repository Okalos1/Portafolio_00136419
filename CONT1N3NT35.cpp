
#include <iostream>
using namespace std;

struct paisesCont1{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAsia[5];

struct paisesCont2{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAme[5];

struct paisesCont3{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContAfr[5];

struct paisesCont4{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContEu[5];

struct paisesCont5{
	char nombre[30];
	char capital[30];
	int habitantes;
	
}ContOce[5];

int main(){
	

	
	cout<< "Continente Asiatico" << endl;
	
	for(int i=0; i<5; i++){
		cout << "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContAsia[i].nombre;
		cout<<"Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContAsia[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1 << ":" << endl;
		cin >> ContAsia[i].habitantes;
	}
	
	cout << "Continente Americano"<< endl;
	
	for(int i=0; i<5; i++){
		cout<< "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContAme[i].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContAme[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1<< ":" << endl;
		cin >> ContAme[i].habitantes;
	}
	cout << "Continente Africano"<< endl;
	
	for(int i=0; i<5; i++){
		cout<< "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContAfr[i].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContAfr[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1<< ":" << endl;
		cin >> ContAfr[i].habitantes;
	}
	
	cout << "Continente Oceanico"<< endl;
	
	for(int i=0; i<5; i++){
		cout<< "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContOce[i].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContOce[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1<< ":" << endl;
		cin >> ContOce[i].habitantes;
	}
	cout << "Continente Europeo"<< endl;
	
	for(int i=0; i<5; i++){
		cout<< "Ingrese el nombre del pais N-" << i+1 << ":" << endl;
		cin >> ContEu[i].nombre;
		cout<< "Ingrese el nombre de la capital del pais N-" << i+1 << ":" << endl;
		cin >> ContEu[i].capital;
		cout<< "Ingrese el numero de habitantes del pais N-" << i+1<< ":" << endl;
		cin >> ContEu[i].habitantes;
	}
		
	system("PAUSE");
	
int pato1=0,  polka2=0, palillos3=0, pony4=0,  pasto5=0; {
	pato1=ContAme[0].habitantes + ContAme[1].habitantes+ContAme[2].habitantes + ContAme[3].habitantes+ContAme[4].habitantes;
	
	polka2=ContEu[0].habitantes+ ContEu[1].habitantes+ContEu[2].habitantes+ ContEu[3].habitantes+ContEu[4].habitantes;
	
	palillos3=ContOce[0].habitantes+ ContOce[1].habitantes+ContOce[2].habitantes+ ContOce[3].habitantes+ContOce[4].habitantes;
	
	pony4=ContAsia[0].habitantes+ ContAsia[1].habitantes+ContAsia[2].habitantes + ContAsia[3].habitantes+ContAsia[4].habitantes;

pasto5=ContAfr[0].habitantes+ ContAfr[1].habitantes+ContAfr[2].habitantes+ ContAfr[3].habitantes+ContAfr[4].habitantes;
}
cout<<"Poblacion de cada continente: "<<endl;
cout<<"Continente Africano: "<<pasto5<<" habitantes"<<endl;
cout<<"Continente Americano: "<<pato1<<" habitantes"<<endl;
cout<<"Continente Asiatico: "<<pony4<<" habitantes"<<endl;
cout<<"Continente Oceanico: "<<palillos3<<" habitantes"<<endl;
cout<<"Continente Europeo: "<<polka2<<" habitantes"<<endl;
cout<<endl;
		
return 0;
}


