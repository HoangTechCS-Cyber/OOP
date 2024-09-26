#include<bits/stdc++.h>
using namespace std;

class Hang
{   private: 
        char MaHang[50];
        char TenHang[50];
        float DonGia;
    public:
        void Nhap();
        void Xuat();
};
void Hang::Nhap()
{
    cout << "Nhap MaHang: ";                cin.ignore(); cin.getline(MaHang, 50);
    cout << "Nhap TenHang: ";               cin.ignore(); cin.getline(TenHang,50);
    cout << "DonGia: ";                                   cin >> DonGia;

}
void Hang::Xuat()
{
    cout << left << setw(30)<< MaHang
                 << setw(30)<< TenHang
                 << setw(30)<< DonGia<<endl;

}

class Phieu
{   private:
        char maphieu[50];
        Hang x[50];
        int n;
    public:
        void Nhap();
        void Xuat();
};
void Phieu::Nhap()
{
    cout << "Ma Phieu: ";                   cin.ignore(); cin.getline(maphieu, 50);
    cout << "So luong don hang: ";                        cin >> n;
    for(int i =0; i<n;i++)
    {
        x[i].Nhap();
    }
}
void Phieu::Xuat()
{
    cout << left << setw(30)<<"Ma Phieu: "<< maphieu << endl;
    for(int i =0; i<n;i++)
    {
        x[i].Xuat();
    }

}

int main()
{
    Phieu a;
    a.Nhap();
    cout << left << setw(30) << "MaHang" << setw(30)<< "Ten Hang"<<setw(30)<< "DonGia"<<endl;
    a.Xuat();
}
//node

