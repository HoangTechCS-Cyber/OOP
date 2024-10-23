#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Phieu;
class Phong
{
    //
    char MaP[30];
    char TenP[30];
    char TruongP[30];
public:
    void Nhap();
    void Xuat();
};
class NhanVien
{
    char TenNV[30];
    char CVNV[30];
public:
    void Nhap();
    void Xuat();
};
class TaiSan
{
    char TenTS[30];
    int SLTS;
    char TTTS[30];
public:
    void Nhap();
    void Xuat();
    friend class Phieu;
    friend void sua(Phieu &a);
    friend void sx(Phieu &a);
};
class Phieu
{
    char MaPh[30];
    char Ngay[12];
    Phong a;
    NhanVien b;
    TaiSan c[100];
    int n;
public:
    void Nhap();
    void Xuat();
    friend void sua(Phieu &a);
    friend void sx(Phieu &a);
};
void Phong::Nhap()
{
    cout<<"Ma phong:";              fflush(stdin);          gets(MaP);
    cout<<"Ten phong:";             fflush(stdin);          gets(TenP);
    cout<<"Truong phong:";          fflush(stdin);          gets(TruongP);
}
void Phong::Xuat()
{
    cout<<"Kiem ke tai phong: "<<TenP; 
    cout<<"Ma phong: "<<MaP<<endl;
    cout<<"Truong phong: "<<TruongP<<endl;
}
void NhanVien::Nhap()
{
    cout<<"Ten nhan vien:";         fflush(stdin);          gets(TenNV);
    cout<<"Chuc vu:";               fflush(stdin);          gets(CVNV);
}
void NhanVien::Xuat()
{
    cout<<"Nhan vien kiem ke: "<<TenNV;
    cout<<"Chuc vu: "<<CVNV<<endl;
}
void TaiSan::Nhap()
{
    cout<<"Ten tai san:";           fflush(stdin);          gets(TenTS);
    cout<<"So luong:";                                      cin>>SLTS;
    cout<<"Tinh trang:";            fflush(stdin);          gets(TTTS);
}
void TaiSan::Xuat()
{
    cout<<left<<setw(25)<<TenTS;
    cout<<left<<setw(25)<<SLTS;
    cout<<left<<setw(25)<<TTTS<<endl;
}
void Phieu::Nhap()
{
    cout<<"Ma phieu:";              fflush(stdin);          gets(MaPh);
    cout<<"Ngay lap:";              fflush(stdin);          gets(Ngay);
    a. Nhap();
    b. Nhap();
    cout<<"Nhap so tai san cua phieu:"; 
    cin>>n;
    for(int i=0; i<n; i++)
        c[i].Nhap();
}
void Phieu::Xuat()
{
    cout<<" PHHIEU KIEM KE TAI SAN"<<endl; 
    cout<<"Ma phieu: "<<MaPh<<" Ngay kiem ke:"<<Ngay<<endl;
    a. Xuat();
    b. Xuat();
    
    cout<<left<<setw(25)<<"Ten tai san ";
    cout<<left<<setw(25)<<"So luong ";
    cout<<left<<setw(25)<<"Tinh trang "<<endl;
    
    for(int i=0; i<n; i++)
        c[i].Xuat();
    cout<<"Tong so tai san da kiem ke:"<<n; 
    int TongSL=0;
    for(int i=0; i<n; i++)
        TongSL+=c[i].SLTS;
    cout<<"   Tong so luong:"<<TongSL<<endl;
}
void sua(Phieu &a)
{
    for(int i=0;i <a.n;i++)
    {
        if(strcmp(a.c[i].TenTS,"May vi tinh"))
        {
            a.c[i].SLTS=20;
        }
    }
}
void sx(Phieu &a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i+1;j<a.n;j++)
        {
            if(a.c[i].SLTS>a.c[j].SLTS)
            {
                TaiSan tg=a.c[i];
                a.c[i]=a.c[j];
                a.c[j]=tg;
            }
        }
}

int main()
{
    Phieu x;
    x.Nhap();
    x.Xuat();
    sua(x);
    sx(x);
    x.Xuat();
    
}
