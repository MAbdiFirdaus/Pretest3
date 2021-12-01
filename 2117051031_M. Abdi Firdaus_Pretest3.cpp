#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int harga, ongkir1, ongkir2;
	cout<<"Masukkan Harga : Rp. ";
	cin>>harga;
	ongkir1=41000;
	ongkir2=11000;
	if (harga<50000)
	{
		cout<<"Total Pembayaran : Rp."<<harga+ongkir1<<endl;
	}
	else if (harga>=50000&&harga<120000)
	{
		cout<<"Total Pembayaran : Rp."<<harga+ongkir2<<endl;	
	}
	else if (harga>=120000)
	{
		cout<<"Total Pembayaran : Rp."<<harga<<endl;
	}


}
