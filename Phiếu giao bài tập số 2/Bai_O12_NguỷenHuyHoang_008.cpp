#include<iostream>
using namespace std;
#include<iomanip>
class phieu;
class sinhvien
{
private:
    char msv[10];
    char tensv[35];
    char lop[10];
    int khoa;
public:
    void nhap();
    void xuat();
    
};
class mon
{
private:
    char tenmon[30];
    int sotrinh;
    float diem;
public:
    void nhap();
    void xuat();
    friend class phieu;
    friend void tk(phieu a);
    friend void chen(phieu &a);
};
class phieu
{
private:
    sinhvien a;
    mon b[50];
    int n;
public:
    void nhap();
    void xuat();
    friend void tk(phieu a);
    friend void chen(phieu &a);
};
void sinhvien::nhap()
{
    cout<<"msv ";                                   fflush(stdin);      gets(msv);
    cout<<"ten sv ";                                fflush(stdin);      gets(tensv);
    cout<<"lop ";                                   fflush(stdin);      gets(lop);
    cout<<"khoa ";                                                      cin>>khoa;
}
void sinhvien::xuat()
{
    cout<<left<<setw(15)<<"Ma sinh vien "<<left<<setw(15)<<msv;
    cout<<left<<setw(35)<<"Ten sinh vien "<<tensv;
    cout<<endl;
    cout<<left<<setw(15)<<"Lop "<<left<<setw(15)<<lop;
    cout<<left<<setw(15)<<"Khoa "<<khoa;
    cout<<endl;
    
}
void mon::nhap()
{
    cout<<"Ten mon ";                               fflush(stdin);      gets(tenmon);
    cout<<"So trinh ";                                                  cin>>sotrinh;
    cout<<"Diem ";                                                      cin>>diem;
}
void mon::xuat()
{
    cout<<left<<setw(30)<<tenmon;
    cout<<left<<setw(12)<<sotrinh;
    cout<<left<<setw(15)<<diem;
    cout<<endl;
}
void phieu::nhap()
{
    a.nhap();
    cout<<"so mon la ";                                                 cin>>n;
    for(int i=0;i<n;i++)
    {
        b[i].nhap();
    }
}
void phieu::xuat()
{
    cout<<endl;
    cout<<setw(30)<<"PHIEU BAO DIEM ";
    cout<<endl;
    a.xuat();
    cout<<"Bang diem :";
    cout<<endl;
    cout<<left<<setw(30)<<"Ten mon";
    cout<<left<<setw(12)<<"So trinh";
    cout<<left<<setw(15)<<"Diem";
    cout<<endl;
    for(int i=0;i<n;i++)
        b[i].xuat();
    float tong =0;
    int st=0;
    for(int i=0;i<n;i++)
    {
        tong+=(b[i].diem*b[i].sotrinh);
        st+=b[i].sotrinh;
    }
    cout<<right<<setw(42)<<"Diem trung binh   ";
    cout<<(float)tong/st;
    cout<<endl;
}

void tk(phieu a)
{
    int dem=0;
    cout<<"cac mon co so trinh lơn hơn 3 la "<<endl;
    for(int i=0;i<a.n;i++)
    {
        if(a.b[i].sotrinh>3)
            a.b[i].xuat();
        dem++;
    }
    if(dem==0)
    {
        cout<<"Khong co mon hoc co so trinh lon hon 3";
        cout<<endl;
    }
}
void chen(phieu &a)
{
    int k;
    do{
        cout<<"\nNhap vao vi tri can chen ";
        cin>>k;
    }
    while (k<0||k>a.n);
    
    mon x;
    cout<<"Nhap vao thong tin mon moi ";
    cout<<endl;
    x.nhap();
    cout<<"Khi chen them 1 mon hoc ";
    cout<<endl;
    for(int i=a.n;i>k;i--)
    a.b[i]=a.b[i-1];
    a.b[k]=x;
    a.n++;
}
int main()
{
    phieu a;
    a.nhap();
    a.xuat();
    tk(a);
    chen(a);
    a.xuat();
    
}

