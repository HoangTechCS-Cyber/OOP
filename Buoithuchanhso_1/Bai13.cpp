#include<bits/stdc++.h>
using namespace std;


class Hang
{
    private:
        char MaHang[30];
        char TenHang[30];
        float DonGia;
        int SoLuong;
    public:
        void Nhap();
        void Xuat();
};
void Hang::Nhap()
{
    cout << "Nhap ma hang: ";               cin.ignore(); cin.getline(MaHang, 30);
    cout << "Ten Hang: ";                   cin.ignore(); cin.getline(TenHang, 30);
    cout << "Don Gia: ";                                  cin >> DonGia;
    cout << "So Luong: ";                                 cin >> SoLuong;
}
void Hang::Xuat()
{
    cout << left << setw(15) << MaHang
                 << setw(15) << TenHang
                 << setw(15) << DonGia
                 << setw(15) << SoLuong
                 << DonGia * SoLuong<< endl;
}

signed main()
{   int n;
    cout << "Nhap so luong hang hoa: "; cin >> n;
    Hang x[n+5];
    for(int i = 0; i< n; i++)
    {
        cout << "Nhap thong tin mat hang thu " << i+1 << endl;
        x[i].Nhap();
    }
    cout <<left << setw(15) << "Ma Hang"
                << setw(15) << "Ten Hang" 
                << setw(15) << "Don Gia"
                << set(15)  << "So Luong"
                << "Thanh Tien"<< endl;
    for(int i = 0 ; i < n ;i++)
    {
        x[i].Xuat();
    }
}