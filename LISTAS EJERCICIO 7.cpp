#include <iostream>
#include <vector>
using namespace std;

vector < int >lista;

void
agregarNumero ()
{
  int num = 0;
  cout << "Numero: ";
  cin >> num;

  bool continuar = true;
  do
    {
      int opcion = 0;
      cout << "\t1) Al principio\n\t2) Al final" << "\n\tOpcion elegida: ";
      cin >> opcion;
      switch (opcion)
	{
	case 1:
	  lista.insert (lista.begin (), num);
	  continuar = false;
	  break;
	case 2:
	  lista.push_back (num);
	  continuar = false;
	  break;
	default:
	  cout << "Opcion erronea!" << endl;
	  break;
	}
    }
  while (continuar);
}

void
mostrarLista ()
{
  for (int i = 0; i < lista.size (); i++)
    cout << lista[i] << endl;
}


void
Eliminar (int x)
{

  for (int i = 0; i < lista.size (); i++)

    if (x == lista[i]){
      lista.erase (lista.begin()+i);
    }
      
          

	  }
	  




	  int main ()
	{

	  bool continuar = true;
	  int numEliminar = 0;

	  cout << "Digite la lista de datos a continuacion: " << endl;

	  do
	    {
	      int opcion = 0;
	      cout << "Menu: \n\t1) Agregar Numero\n\t2) Ver numeros"
		<<
		"\n\t3) Salir\n\t4) Eliminar numero de la lista \n\tOpcion elegida: ";
	      cin >> opcion;
	      switch (opcion)
		{
		case 1:
		  cout << "Agregando..." << endl;
		  agregarNumero ();
		  break;
		case 2:
		  cout << "Listando..." << endl;
		  mostrarLista ();
		  break;
		case 3:
		  continuar = false;
		  break;

		case 4:

		  cout << "Digite el numero a eliminar: " << endl;
		  cin >> numEliminar;

		  Eliminar (numEliminar);
		  break;
		default:
		  cout << "Opcion erronea!" << endl;
		  break;

		}
	    }
	  while (continuar);


	  return 0;
	}
