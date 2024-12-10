#include<bits/stdc++.h>
using namespace std;

class Hang{
    private:
        char TenHang[30];
        float DonGia;
        int SoLuong;
    public:
        void Nhap();
        void Xuat();
    friend class Phieu;
};
void Hang::Nhap(){
    cout << "Ten Hang: ";                           cin.ignore(); cin.getline(TenHang, 30);
    cout << "DonGia: ";                                           cin >> DonGia;
    cout << "SoLuong: ";                                          cin >> SoLuong;
}
void Hang::Xuat(){
    cout << left << setw(15)<< TenHang<< setw(15) << DonGia << setw(15) << SoLuong<< DonGia * SoLuong << endl;
}
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
    cout << "Ma NCC: ";                         cin.ignore(); cin.getline(MaNCC, 30);
    cout << "TenNCC: ";                         cin.ignore(); cin.getline(TenNCC, 30);
    cout << "DiaChi: ";                         cin.ignore(); cin.getline(DiaChi, 30);
}

void NCC::Xuat(){
    cout << left<< "Ma NCC: "<< setw(15) << MaNCC << "TenNCC: "<< TenNCC<< endl;
    cout << "DiaChi: "<< DiaChi<< endl;
}

class Phieu{
    private:
        char MaPhieu[30];
        char NgayLap[30];
        NCC x;
        Hang a[100];
        int n;
    public:
        void Nhap();
        void Xuat();
};
void Phieu::Nhap(){
    cout << "MaPhieu: ";                            cin.ignore(); cin.getline(MaPhieu, 30);
    cout << "Ngay Lap: ";                           cin.ignore(); cin.getline(NgayLap, 30);
    x.Nhap();
    cout << "Nhap So luong mat hang: ";                           cin >> n;
    for(int i = 0; i < n; i++){
        a[i].Nhap();
    }
  
}

void Phieu::Xuat(){
    cout << left << "Ma Phieu: "<< setw(15)<< MaPhieu << "Ngay Lap: "<< NgayLap<< endl;
    x.Xuat();
    cout << left << setw(15) << "Ten Hang "<< setw(15) << "Don Gia"<< setw(15) << "So Luong" << setw(15) << "Thanh Tien" << endl;
    float Tong = 0;
    for(int i = 0; i < n; i++){
        a[i].Xuat();
        Tong += a[i].SoLuong * a[i].DonGia;
    }
      cout <<left << setw(30) << " "<< "Cong Thanh Tien: "<< Tong;
}

int main(){
    Phieu x;
    x.Nhap();
    x.Xuat();
}