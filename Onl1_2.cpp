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
	
}
class Mon
{	private:
		char TenMon[50];
		int Strinh;
		float Diem;
	public:
		void Nhap();
		void Xuat();
	friend class Phieu;
};

void Mon::Nhap()
{
cout << "ten mon: "; 			cin.ignore(); cin.getline(TenMon);
cout << "Strinh: ";							  cin>>Strinh;
cout << "Diem: ";							  cin>>Diem;
}
void Mon::Xuat()
{
	cout << setw()
}

float Dem(Mon b)
{
	for(int i =0; i< n; i++)
		if()
}
