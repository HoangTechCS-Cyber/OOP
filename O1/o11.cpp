#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class NCC{
    private:
        char MaNCC[30];
        char TenNCC[30];
        char DiaChi[30];
    public:
        void Nhap();
        void Xuat();
};
void NCC::Nhap(){
    cout << "MaNCC: ";                      cin.ignore(); cin.getline(MaNCC, 30);
    cout << "TenNCC: ";                     cin.ignore(); cin.getline(TenNCC, 30);
    cout << "DiaChi: ";                     cin.ignore(); cin.getline(DiaChi, 30);
}
void NCC::Xuat(){
    cout << 
}
class Hang{
    private:
        char TenHang[30];
        float DongGia;
        int SoLuong;
    public:
        void Nhap();
        void Xuat();
};
class Phieu{
    private:
        char MaPhieu[30];
        char NgayLap[30];
    public:
        void Nhap();
        void Xuat();
};