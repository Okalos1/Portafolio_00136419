#include<iostream>
#include<stdlib.h>

using namespace std;

int **PMetroid,LA=10,colmena=20;

int main(){
	int a=0;
	
	PMetroid=new int*[fil];
	
	for(int i=0;i<LA;i++)
	   PMetroid[i]= new int[colmena];
	
	PMetroid[0][0]=100;
	cout<<"\n Direcciones de memoria\n"<<&PMetroid[0][0]<<"\n"<<&PMetroid[2][1]<<"\n"<<&PMetroid[5][1]<<"\n"<<&PMetroid[1][10]<<"\n"<<&PMetroid[2][10]<<"\n"<<&PMetroid[5][3]<<"\n"<<&PMetroid[9][19];

	PMetroid[0][0]=*(*PMetroid);
	cout<<"\n"<<PMetroid[0][0]<<"\n";

  /* No es valida la opcion
      for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMetroid))+(i+ *col +j)=a;
       	 a++;
	   }
	   a=0;
	}
 */  
 /*
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(PMetroid+i)+j)=a;
       	 a++;
	   }
	   a=0;
	}
		for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(*(PMetroid+i)+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

    /*for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(PMetroid[i]+j)=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(PMetroid[i]+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 (*(PMetroid+i))[j]=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<(*(PMetroid+i))[j]<<"]";	
		}
		cout<<"\n";
    }
*/
	
	return 0;
}
