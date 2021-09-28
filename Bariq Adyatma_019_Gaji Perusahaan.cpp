/*Program untuk menghitung gaji karyawan*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	char nama[200], nik[13];
	int jklmn, status, kndrn;
	long int gajipk, uangmkn, tnjngn, trnspt, gajikt, pjk, gajibr;
	
	//input
	cout<<"\n Program Gaji Karyawan"<<endl;
	cout<<"\nNama="; cin>>nama;
	cout<<"NIK="; cin>>nik;
	cout<<"Jenis Kelamin (0=perempuan 1=laki laki)="; cin>>jklmn;
	cout<<"Status Pernikahan (0=single 1=menikah)="; cin>>status;
	cout<<"Kendaraan (0=motor 1=mobil)="; cin>>kndrn;
	cout<<"Jumlah Gaji Pokok="; cin>>gajipk;
	cout<<"Jumlah Uang Makan="; cin>>uangmkn;
	
	//tunjangan
	if(jklmn==1 && status==1){
		tnjngn=500;
	}
	else{
		tnjngn=0;
	}
	
	//transport
	if(kndrn==1){
		trnspt=1000;
	}
	else if(kndrn=0){
		trnspt=500;
	}
	
	//gaji kotor
	gajikt=gajipk+tnjngn+uangmkn+trnspt;
	
	//pajak
	pjk=(0.05*gajikt);
	
	//gaji
	gajibr=gajikt-pjk;
	
	//output
	cout<<"\nNama="<<nama<<endl;
	cout<<"NIK="<<nik<<endl;
	cout<<"Tunjangan="<<tnjngn<<endl;
	cout<<"Uang Transport="<<trnspt<<endl;
	cout<<"Gaji Pokok="<<gajikt<<endl;
	cout<<"Pajak="<<pjk<<endl;
	cout<<"Gaji Bersih="<<gajibr<<endl;
	
	getch();
	return 0;
}
