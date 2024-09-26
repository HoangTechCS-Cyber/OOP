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
    cout << "Ma NCC: "<<setw(30)<< MaNcc   << "Ten NCC: " << TenNCC<<endl;
    cout << "Dia Chi: "<<DiaChi<<endl;
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
    friend class Phieu;

};
void Hang::Nhap()
{
    cout << "Nhap Ten Hang: ";              cin.ignore(); cin.getline(TenHang,30);
    cout << "Nhap Don Gia: ";                             cin >> DonGia;
    cout << "Nhap So Luong: ";                            cin >> SoLuong;
}
void Hang::Xuat()
{
    cout << left<< setw(30) <<TenHang
                << setw(30) <<DonGia
                << setw(30) <<SoLuong
                << setw(30) << (float)SoLuong * DonGia<<endl;
}
class Phieu
{   private:
        char maphieu[50];
        char NgayLap[30];
        NhaCC x;
        Hang a[30];
        int n;

    public:
        void Nhap();
        void Xuat();
};
void Phieu::Nhap()
{
    cout << "Ma Phieu: ";                    cin.ignore(); cin.getline(maphieu,50);
    cout << "Ngay Lap: ";                    cin.ignore(); cin.getline(NgayLap,50);
    x.Nhap();
    cout << "Nhap So Luong Hang: ";                       cin >> n;
    for(int i=0; i<n;i++)
    {
        a[i].Nhap();
    }
}
void Phieu::Xuat()
{   
    cout<<left <<"Ma Phieu: "<<setw(30)<< maphieu
               <<"Ngay Lap: " << NgayLap<<endl;
    x.Xuat();
    cout <<left<< setw(30) <<"Ten Hang" << setw(30) << "Don Gia"<<setw(30) << "So Luong"<< "Thanh Tien"<<endl;
    float Tong =0;
    for(int i = 0;i < n; i++)
        {
            a[i].Xuat();
            Tong +=a[i].SoLuong*a[i].DonGia;
        }
    cout << left << setw(90)<<" " << "Tong Tien: "<< Tong;
    
}
void sx(Phieu b)
{
    sort(b.x[1].SoLuong, b.x[x.size()].SoLuong);
}
int main()
{  
    Phieu a;
    a.Nhap();
    sx(b);
    a.Xuat();
}
//node
