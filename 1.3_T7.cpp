#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class HANG
{
public:
	void NHAP();
	void XUAT();

private:
	char Mahang[10];
	char Tenhang[30];
	float Dongia;
	int SoLuong;
};

void HANG::NHAP()
{
	
	{
		cin.ignore();
		cout << "Ma hang: ";	cin.getline(Mahang, 10);
		cout << "Ten hang: ";	cin.getline(Tenhang, 30);
		cout << "Don gia: ";	cin >> Dongia;
		cout << "So luong: ";	cin >> SoLuong;
	}
}

void HANG::XUAT()
{
		cout << setw(30)  << Mahang;
		cout << setw(30)  << Tenhang;
		cout << setw(30)  << Dongia;
		cout << setw(30)  << SoLuong << endl;
}
int main()
{	cout << "Nhap so mat hang: ";	cin >> n;
	HANG a[n]
	for (int i = 0; i < n; i++)
	a[i].NHAP();
	cout << left <<setw(30) << "MaHang" << setw(30)<<"Tenhang"<<setw(30)<<"Dongia"<<setw(30)<<"SoLuong"<<endl;
	for (int i = 0; i < n; i++)
	a.XUAT();

}