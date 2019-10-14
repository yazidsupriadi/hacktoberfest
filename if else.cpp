#include<iostream>
using namespace std;

struct tanggalan{
	string hari;
	int tanggal;
 string bulan;
 float tahun;
};
tanggalan tanggal_lahir;
int main(){
		tanggal_lahir.hari="senin";
		tanggal_lahir.tanggal=16;
		tanggal_lahir.bulan = "januari";
		tanggal_lahir.tahun = 1999;
		
		cout<<"saya lahir pada hari"<<tanggal_lahir.hari<<endl;
		cout<<"tanggal "<<tanggal_lahir.tanggal<<endl;
		cout<<"bulan "<<tanggal_lahir.bulan<<endl;
		cout<<"tahun"<<tanggal_lahir.tahun<<endl;
}
