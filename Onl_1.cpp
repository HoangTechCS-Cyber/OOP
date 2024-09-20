#include<bits/stdc++.h>
using namespace std;
//Nha CC
class NhaCC
{
    private:
        char MaNcc[50];
        char TenNCC[50];
        char DiaChi[150];
    public:
        void Nhap();
        void Xuat();
};
void NhaCC::Nhap()
{
    cout << "Nhap Ma Ncc: ";            cin.ignore(); cin.getline(MaNcc, 50);
    cout << "Nhap Ten Ncc: ";           cin.ignore(); cin.getline(TenNCC, 50);
    cout << "Nhap Dia Chi: ";           cin.ignore(); cin.getline(DiaChi, 50);

}
void NhaCC::Xuat()
{
    cout << left <<setw(30)<< "Dia Chi: "<<DiaChi<<endl;
}
// Hang
class Hang
{
    private: 
        char TenHang[30];
        float DonGia;
        int SoLuong;
    public: 
        void Nhap();
        void Xuat();

};
void Hang::Nhap()
{
    cout << "Nhap Ten Hang: ";              cin.ignore(); cin.getline(TenHang,30);
    cout << "Nhap Don Gia: ";                             cin >> DonGia;
    cout << "Nhap So Luong: ";                            cin >> SoLuong;
}
{
    cout << left<< setw(30) <<TenHang
}
class Phieu
{   private:
        char maphieu[50];
        char NgayLap[30];
        Hang a[30];
        int n;
    public:
        void Nhap();
        void Xuat();
};
void Phieu::Nhap()
{
    cout << "Ma Phieu: ";                   cin.ignore(); cin.getline(maphieu,50);
    cout << "Ngay Lap: "                    cin.ignore(); cin.getline(NgayLap,50);
    cout << "Nhap So Luong Hang: ";                       cin >> n;
    for(int i=0; i<n;i++)
    {
        a[i].Nhap();
    }
}
void Phieu::Xuat()
{
    cout << left << setw(30) <<  
}


class 