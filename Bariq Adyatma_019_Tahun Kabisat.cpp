/*Program Menentukan Bulan Kabisat*/
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int a;
	
	//input
	cout<<"Program menentukan bulan kabisat"<<endl;
	cout<<"================================"<<endl;
	cout<<"Masukkan Tahun="; cin>>a;
	
	//output
	if(a%4==0){
		cout<<"Bulan tersebut adalah bulan kabisat";
	}
	else {
		cout<<"Bulan tersebut adalah bukan bulan kabisat";
	}
	
	getch ();
	return 0;
}
