/*Program konversi nilai*/

#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int nilai;
	string grd;
	
	//input nilai
	cout<<"Program Mengkonversikan Nilai"<<endl<<endl;
	cout<<"|===========================|"<<endl;
	cout<<"|Daftar Grade Nilai=        |"<<endl;
	cout<<"| A   -> 80-100             |"<<endl;
	cout<<"| B   -> 65-79              |"<<endl;
	cout<<"| C   -> 50-64              |"<<endl;
	cout<<"| D   -> 35-49              |"<<endl;
	cout<<"| E   -> 0-34               |"<<endl;
	cout<<"|===========================|"<<endl;
	cout<<"Masukkan Nilai Anda="; cin>>nilai;
	
	//pengerjakan grade
	switch(nilai){
		case 80 ... 100: grd="A";
		break;
		case 65 ... 79: grd="B";
		break;
		case 50 ... 64: grd="C";
		break;
		case 35 ... 49: grd="D";
		break;
		case 0 ... 34: grd="E";
		break;
		
		default: cout<<"Nilai yang anda masukkan diluar jangkauan\n";
	}
	
	//output
	cout<<"Grade Anda="<<grd;
	
	getch();
	return 0;
}
