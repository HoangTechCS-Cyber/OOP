#include<bits/stdc++.h>
using namespace std;

class sv
{	private:
		char msv[30];
		char Ten[50];
		char Lop[30];
		int  Khoa;
	public:
		void Nhap();
		void Xuat();
};

void sv::Nhap()
{
	cout << "Ma Sinh Vien: ";					cin.ignore(); cin.getline(msv);
	cout << "Ho Ten: ";							cin.ignore(); cin.getline(Ten);
	cotu << "Lop: ";							cin.ignore(); cin.getline(Lop);
	cout << "Khoa: ";										  cin >> Khoa;

}
void sv:Xuat()
{
	cout << left<< setw(30)<< "Ma Sinh Vien: "<< msv << setw(30)<< "Ten Sinh Vien: "<< Ten << endl
				<< setw(30)<< "Lop: "<<Lop
				<< setw(30)<< 
}