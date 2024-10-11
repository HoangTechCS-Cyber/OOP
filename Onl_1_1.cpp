#include<bits/stdc++.h>
using namespace std;

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
// Hang node
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
    void NCC::nhap()
    {
        cout << "Nhap ma NCC: ";                                    cin.ignore(); cin.getline(mancc, 30);
        cout << "Nhap ten NCC: ";                                   cin.ignore(); cin.getline(tenncc, 30);
        cout << "Nhap dia chi: ";                                   cin.ignore(); cin.getline(diachi, 30);
    }
    void NCC::xuat()
    {
        cout << left <<"MA NCC: " <<setw(15)<< mancc<<"Ten NCC: "<<tenncc<< endl;
        cout << left << "Dia chi: "<< diachi<< endl;
    }
class PHIEU
{
    private:
        char maphieu[30];
        char ngaylap[30];
        NCC  ncc;
        HANG x[30];
        int n;
    public:
        void nhap();
        void xuat();  
};
    void PHIEU::nhap()
    {
        cout << "Nhap ma Phieu: ";                                  cin.ignore(); cin.getline(maphieu, 30);
        cout << "Nhap Ngay Lap: ";                                  cin.ignore(); cin.getline(ngaylap, 30);
        ncc.nhap();
        cout << "Nhap so luong hang hoa: ";                                       cin >> n;
        For(i, 1, n) x[i].nhap();
    }
    void PHIEU::xuat()
    {
        cout << left<<"Ma Phieu: "<< setw(15)<< maphieu << "Ngay Lap: "<<ngaylap<< endl;
        ncc.xuat();
        For(i, 1, n) x[i].xuat();
    }

signed main()
{
#ifndef LOCAL
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#endif


}