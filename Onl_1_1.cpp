#include<bits/stdc++.h>

using namespace std;

#define int long long 
#define ld long double
#define For(i,a,b) for(int i =a; i<=b;i++)
#define pii pair<int, int> 

const int MOD = 1e9+7;
const int N = 100;
const int maxn = 150000;
class HANG
{ 
    private:
        char tenhang[30];
        float dongia[30];
        int soluong[30];
    public:
        void nhap();
        void xuat();
};
void HANG::nhap()
{
    cout <<"Nhap Ten Hang: ";                                       cin.ignore(); cin.getline(tenhang, 30);
    cout <<"Nhap dongia: ";                                                       cin >> dongia;
    cout << "Nhap so luong: ";                                                    cin >> soluong;
}
void HANG::xuat()
{
    cout <<left<<setw(15)<<tenhang
               <<setw(15)<<dongia
               <<setw(15)<<soluong
               << soluong *dongia << endl;
}
class NCC
{
    private:
        char mancc[30];
        char tenncc[30];
        char diachi[30];
    public:
        void nhap();
        void xuat();
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