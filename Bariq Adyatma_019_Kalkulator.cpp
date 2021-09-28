/*Program Kalkulator*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

main (){
	int a, b, pil;
	float hasil;
	string opr;
	
	//input
	cout<<"Program Kalkulator"<<endl;
	cout<<"|----------------------------|"<<endl;
	cout<<"|Pilihan Operator Aritmatika |"<<endl;
	cout<<"|1=Penjumlahan               |"<<endl;
	cout<<"|2=Pengurangan               |"<<endl;
	cout<<"|3=Perkalian                 |"<<endl;
	cout<<"|4=Pembagian                 |"<<endl;
	cout<<"|5=Modulo                    |"<<endl;
	cout<<"|----------------------------|"<<endl;
	cout<<"Masukkan Pilihan Operator Aritmatika="; cin>>pil;
	cout<<"Masukkan Bilangan Pertama="; cin>>a;
	cout<<"Masukkan Bilangan Kedua="; cin>>b;
	cout<<endl;
	
	switch(pil){
		case 1 : hasil=a+b;
		opr="+";
		break;
		
		case 2 : hasil=a-b;
		opr="-";
		break;
		
		case 3 : hasil=a*b;
		opr="*";
		break;
		
		case 4 : hasil=a/b;
		opr="/";
		break;
		
		case 5 : hasil=a%b;
		opr="%";
		break;
		
		default :
			cout<<"Operasi Aritmatika Salah"<<endl;
	}
	
	cout<<"Hasil Operasi Aritmatika Sebagai Berikut"<<endl;
	cout<<a<<opr<<b<<"="<<hasil;
	
	getch();
	return 0;
}
