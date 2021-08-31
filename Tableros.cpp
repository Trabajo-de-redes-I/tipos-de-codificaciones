#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include<iomanip>
using namespace std;



void llenarvec(int *vec){
	
	for(int i=0;i<12;i++){
	
		vec[i]=0+rand()%(1-0+1);
		
	}
	
}




void tablero1(char **mat,int *vec){
	int i=0,j=0;

	
	cout<<"\t\t\t______________________________________________________________________________\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t|     |  "<<vec[0]<<"  |  "<<vec[1]<<"  |  "<<vec[2]<<"  |  "<<vec[3]<<"  |  "<<vec[4]<<"  |  "<<vec[5]<<"  |  "<<vec[6]<<"  |  "<<vec[7]<<"  |  "<<vec[8]<<"  |  "<<vec[9]<<"  |  "<<vec[10]<<"  |  "<<vec[11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t|  1  |  "<<mat[0][0]<<"  |  "<<mat[0][1]<<"  |  "<<mat[0][2]<<"  |  "<<mat[0][3]<<"  |  "<<mat[0][4]<<"  |  "<<mat[0][5]<<"  |  "<<mat[0][6]<<"  |  "<<mat[0][7]<<"  |  "<<mat[0][8]<<"  |  "<<mat[0][9]<<"  |  "<<mat[0][10]<<"  |  "<<mat[0][11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t|  0  |  "<<mat[1][0]<<"  |  "<<mat[1][1]<<"  |  "<<mat[1][2]<<"  |  "<<mat[1][3]<<"  |  "<<mat[1][4]<<"  |  "<<mat[1][5]<<"  |  "<<mat[1][6]<<"  |  "<<mat[1][7]<<"  |  "<<mat[1][8]<<"  |  "<<mat[1][9]<<"  |  "<<mat[1][10]<<"  |  "<<mat[1][11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
}

void tablero2(char **mat,int *vec){
	int i=0,j=0;
	  

	cout<<"\t\t\t______________________________________________________________________________\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t|     |  "<<vec[0]<<"  |  "<<vec[1]<<"  |  "<<vec[2]<<"  |  "<<vec[3]<<"  |  "<<vec[4]<<"  |  "<<vec[5]<<"  |  "<<vec[6]<<"  |  "<<vec[7]<<"  |  "<<vec[8]<<"  |  "<<vec[9]<<"  |  "<<vec[10]<<"  |  "<<vec[11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t|  1  |  "<<mat[0][0]<<"  |  "<<mat[0][1]<<"  |  "<<mat[0][2]<<"  |  "<<mat[0][3]<<"  |  "<<mat[0][4]<<"  |  "<<mat[0][5]<<"  |  "<<mat[0][6]<<"  |  "<<mat[0][7]<<"  |  "<<mat[0][8]<<"  |  "<<mat[0][9]<<"  |  "<<mat[0][10]<<"  |  "<<mat[0][11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t|  0  |  "<<mat[1][0]<<"  |  "<<mat[1][1]<<"  |  "<<mat[1][2]<<"  |  "<<mat[1][3]<<"  |  "<<mat[1][4]<<"  |  "<<mat[1][5]<<"  |  "<<mat[1][6]<<"  |  "<<mat[1][7]<<"  |  "<<mat[1][8]<<"  |  "<<mat[1][9]<<"  |  "<<mat[1][10]<<"  |  "<<mat[1][11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
	cout<<"\t\t\t|     |     |     |     |     |     |     |     |     |     |     |     |     |\n";
	cout<<"\t\t\t| -1  |  "<<mat[2][0]<<"  |  "<<mat[2][1]<<"  |  "<<mat[2][2]<<"  |  "<<mat[2][3]<<"  |  "<<mat[2][4]<<"  |  "<<mat[2][5]<<"  |  "<<mat[2][6]<<"  |  "<<mat[2][7]<<"  |  "<<mat[2][8]<<"  |  "<<mat[2][9]<<"  |  "<<mat[2][10]<<"  |  "<<mat[2][11]<<"  |\n";
	cout<<"\t\t\t|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
}

void no_retorno_cero(){
	int vec[12];
	char **mat;
	mat=(char**)calloc(2,sizeof(char));
	for(int i=0;i<2;i++){
		
		mat[i]=(char*)calloc(12,sizeof(char));
		
	}
	
	llenarvec(vec);
	
	for(int i=0;i<12;i++){
		if(vec[i]==0){
			mat[1][i]='*';
			mat[0][i]=' ';
		}else{
			mat[0][i]='*';
			mat[1][i]=' ';
		}
		
		
	}
	tablero1(mat,vec);
	
	
	
}

void no_retorno_cero_invertido(){
	int vec[12];
	bool band=true, inicio=true;
	char **mat=(char**)calloc(2,sizeof(char));
	for(int i=0;i<2;i++){
		mat[i]=(char*)calloc(12,sizeof(char));	
	}
	
	llenarvec(vec);
	
	for(int i=0;i<12;i++){
		if(inicio){//solo al inicio de hacer la señal 
			if(vec[i]==1){
				mat[0][0]='*';
				mat[1][0]=' ';
				band=true;//empezo el pulso en 1
			}else{
				mat[0][0]=' ';
				mat[1][0]='*';
				band=false;//empezo el pulso en 0
			}
			inicio=false;
			
		}else{
			if(vec[i]==1 && band){
				mat[0][i]=' ';
				mat[1][i]='*';
				band=false;
			}else if(vec[i]==1 && !band){
				mat[0][i]='*';
				mat[1][i]=' ';
				band=true;
			}else if(vec[i]==0 && !band){
				mat[0][i]=' ';
				mat[1][i]='*';
				band=false;
			}else if(vec[i]==0 && band){
				mat[0][i]='*';
				mat[1][i]=' ';
				band=true;
			}
		}	
	}
	
	tablero1(mat,vec);
	
}

void bipolar_AMI(){
	bool band=true;
	int vec[12];
	char **mat;
	mat=(char**)calloc(3,sizeof(char));
	for(int i=0;i<3;i++){
		
		mat[i]=(char*)calloc(12,sizeof(char));
		
	}
	llenarvec(vec);
	
	for(int i=0;i<12;i++){
		
		if(vec[i]==0){
			mat[0][i]=' ';
			mat[1][i]='*';
			mat[2][i]=' ';
			
		}else if(band){
			mat[0][i]='*';
			mat[1][i]=' ';
			mat[2][i]=' ';
			band=false;
			
		}else{
			mat[0][i]=' ';
			mat[1][i]=' ';
			mat[2][i]='*';
			band=true;
		}
		
		
		
	}
	
	
	tablero2(mat,vec);
	
	
	
}

void pseudoternario(){
	int vec[12];
	bool band=true;
	char **mat=(char**)calloc(2,sizeof(char));
	for(int i=0;i<3;i++){
		mat[i]=(char*)calloc(12,sizeof(char));	
	}
	
	llenarvec(vec);
	
	for(int i=0; i<12; i++){
		if(vec[i]==0){
			if(band){
				mat[0][i]='*';
				mat[1][i]=' ';
				mat[2][i]=' ';
				band=false;
			}else{
				mat[0][i]=' ';
				mat[1][i]=' ';
				mat[2][i]='*';
				band=true;
			}
		}else{
			mat[0][i]=' ';
			mat[1][i]='*';
			mat[2][i]=' ';
		}
	}
	
	tablero2(mat,vec);
	
}


void manchester(){
	int vec[12];
	char **mat;
	mat=(char**)calloc(2,sizeof(char));
	for(int i=0;i<2;i++){
		
		mat[i]=(char*)calloc(12,sizeof(char));
		
	}
	
	llenarvec(vec);
	
	for(int i=0; i<12; i++){
		if(vec[i]==1){
			mat[0][i]='*';
			mat[1][i]=' ';
		}else{
			mat[0][i]=' ';
			mat[1][i]='*';
		}
	}
	
	tablero1(mat,vec);
	
}

void menu(){
	
	int op;
	
	
	
	do{
		system("cls");
		cout<<right<<setw(50)<<"MENU(Tipos de codificaciones)"<<endl;
		cout.width(48);cout.fill(' ');
		cout<<"[1]No retorno a cero(NRC-L)"<<endl;
		cout.width(58);cout.fill(' ');
		cout<<"[2]No retorno a cero invertido(NRZ-I)"<<endl;
		cout.width(35);cout.fill(' ');
		cout<<"[3]Bipolar AMI"<<endl;
		cout.width(38);cout.fill(' ');
		cout<<"[4]Pseudoternario"<<endl;
		cout.width(34);cout.fill(' ');
		cout<<"[5]Manchester"<<endl;
		cout.width(42);cout.fill(' ');
		cout<<"[6]Codigo diferencial"<<endl;
		cout.width(29);cout.fill(' ');
		cout<<"[7]Salir"<<endl;
		cout.width(39);cout.fill(' ');
		cout<<"Elige una opcion: ";
		cin>>op;
		system("cls");
		switch(op){
			case 1:
				cout<<right<<setw(80)<<"Codificacion no retorno a cero(NRZ-L)"<<endl<<endl;
				no_retorno_cero();
				break;
			case 2:
				cout<<right<<setw(85)<<"Codificacion no retorno a cero invertido (NRZ-I)"<<endl<<endl;
				no_retorno_cero_invertido();
				break;
			case 3:
				cout<<right<<setw(70)<<"Codificacion Bipolar AMI"<<endl<<endl;
				bipolar_AMI();
				break;
			case 4:
				cout<<right<<setw(75)<<"Codificacion Pseudoternario"<<endl<<endl;
				pseudoternario();
				break;
			case 5:
				cout<<right<<setw(75)<<"Codificacion Manchester"<<endl<<endl;
				manchester();
				break;
			case 6:
				
				break;
			case 7:
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Error, opcion invalida.Intenta de nuevo"<<endl;
				break;
			
			
			
		}
		cout<<endl;
		system("pause");
		
	}while(op!=7);
	
	
	
	
	
	
	
}
int main(){
	srand(time(NULL));
	//inicio del program
    menu();
    
	cout<<endl<<endl;
	system("pause");
	return 0;
}
