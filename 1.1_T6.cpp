#include<bits/stdc++.h>
using namespace std;
class sv
{
    private:
        int msv;
        char Hoten[50];
        int Tuoi;
        float Diem;
    public:
        void Nhap();
        void Xuat();
};
void sv::Nhap()
{
    cout << "Nhap msv: ";                       cin >> msv;
    cout << "Nhap Hoten: ";     cin.ignore(); cin.getline(Hoten,50);
    cout << "Nhap Tuoi: ";                      cin >> Tuoi;
    cout << "Nhap Diem: ";                      cin >> Diem;
}
void sv::Xuat()
{
    cout <<left<< setw(20)<<msv
         << setw(30)<<Hoten
         << setw(10)<<Tuoi
         << setw(10)<<Diem<<endl;
}
int main()
{
    sv a,b;
    
    a.Nhap();
    b.Nhap();
    cout <<left<< setw(20)<<"ma sinh vien"
         << setw(30)<<"Ho va Ten"
         << setw(10)<<"Tuoi"
         << setw(10)<<"Diem"<<endl;
    a.Xuat();
    b.Xuat();
}