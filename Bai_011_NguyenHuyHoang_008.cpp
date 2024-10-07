#include <iostream>
using namespace std;
#include<iomanip>
class NCC
{
private:
    char MNCC[30];
    char TNCC[30];
    char DC[50];
public:
    void nhap();
    void xuat();
    
};
class hang
{
private:
    char tenhang[30];
    int dongia;
    int soluong;
public:
    void nhap();
    void xuat();
    friend class phieu;
};
class phieu
{
private:
    char maphieu[30];
    char ngay[12];
    NCC b;
    hang a[100];
    int n;
public:
    void nhap();
    void xuat();
    
};
void NCC::nhap()
{
    cout<<"MNCC ";                      fflush(stdin);          gets(MNCC);
    cout<<"TNCC ";                      fflush(stdin);          gets(TNCC);
    cout<<"dia chi ";                   fflush(stdin);          gets(DC);
}
void NCC::xuat()
{
    cout<<"Ma NCC:   "<<left<<setw(15)<<MNCC;
    cout<<"Ten NCC:  "<<left<<setw(15)<<TNCC;
    cout<<endl;
    cout<<"Dia chi"<<DC;

}
void hang::nhap()
{
    
    cout<<"Ten hang:";                  fflush(stdin);          gets(tenhang);
    cout<<"So luong:";                                          cin>>soluong;
    cout<<"Dong gia:";                                          cin>>dongia;
}
void hang::xuat()
{
    cout<<left<<setw(20)<<tenhang;
    cout<<left<<setw(10)<<dongia;
    cout<<left<<setw(10)<<soluong;
    cout<<soluong*dongia;
    cout<<endl;
    
}
void phieu::nhap()
{
    cout<<"ma phieu ";                  fflush(stdin);           gets(maphieu);
    cout<<"Ngay lap ";                  fflush(stdin);           gets(ngay);
    b.nhap();
    cout<<"Nhap so hang cua phieu";                              cin>>n;
    for(int i=0;i <n;i++)
    {
        a[i].nhap();
    }
}
void phieu::xuat()
{
    cout<<setw(30)<<"Phieu nhap hang";
    cout<<endl;
    cout<<"Ma phieu: "<<left<<setw(15)<<maphieu;
    cout<<"Ngay lap: "<<left<<setw(15)<<ngay;
    cout<<endl;
    b.xuat();
    cout<<endl;
    cout<<left<<setw(20)<<"ten hang";
    cout<<left<<setw(10)<<"don gia";
    cout<<left<<setw(10)<<"so luong";
    cout<<"thanh tien";
    cout<<endl;
    for(int i=0;i <n;i++)
    {
        a[i].xuat();
    }
    int tt=0;
    for(int i=0;i <n;i++)
    {
        tt+=a[i].dongia*a[i].soluong;
    }
    cout<<right<<setw(40)<<"Cong thanh tien "<<tt;

}
int main()
{
    phieu x;
    x.nhap();
    x.xuat();
}


