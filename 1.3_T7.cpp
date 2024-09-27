#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class HANG
{
	private:
		char Mahang[10];
		char Tenhang[30];
		float Dongia;
		int SoLuong;
	public:
		void NHAP();
		void XUAT();
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
{	int n; 
    cout << "Nhap so mat hang: ";	cin >> n;
	HANG a[n];
	for (int i = 0; i < n; i++)
	a[i].NHAP();
	cout << left <<setw(30) << "Ma Hang" << setw(30)<<"Ten hang"<<setw(30)<<"Don gia"<<setw(30)<<"So Luong"<<endl;
	for (int i = 0; i < n; i++)
	a[i].XUAT();

}
