#include<bits/stdc++.h>
using namespace std;

class SinhVien
{
    private:
        char Masv[30];
        char Hoten[30];
        int Tuoi;
        float Diem;
    public:
        void Nhap();
        void Xuat();
};
void SinhVien::Nhap()
{
    cout << "Nhap ma sinh vien: ";              cin.ignore(); cin.getline(Masv, 30);
    cout << "Nhap ho ten: ";                    cin.ignore(); cin.getline(Hoten, 30);
    cout << "Nhap tuoi: ";                                    cin >> Tuoi;
    cout << "Nhap Diem: ";                                    cin >> Diem;
}
void SinhVien::Xuat()
{
    cout << left << setw(15)<< Masv
                 << setw(15)<< Hoten
                 << setw(15)<< Tuoi 
                 << setw(15)<< Diem<< endl;

}

signed main()
{   int n;
    cout << "Nhap so luong sinh vien: "; cin >> n;
    SinhVien x[n+5];
    for(int i =0; i< n; i++)
    {
        x[i].Nhap();
    }
    cout << left << setw(15)<< "Ma sinh vien"<< setw(15)<< "Ho ten" << setw(15)<< "Tuoi"<< setw(15)<< "Diem" << endl;
    for(int i = 0; i < n; i++)
    {
        x[i].Xuat();
    } 
}
