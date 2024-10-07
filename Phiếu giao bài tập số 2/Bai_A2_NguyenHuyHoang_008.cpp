#include <iostream>
using namespace std;
#include <iomanip>
class lop;
class nguoi
{
protected:
    char hoten[35];
    char ns[12];
    char qq[50];
public:
    void nhap();
    void xuat();
};
void nguoi::nhap()
{
    cout<<"ho ten la ";                     fflush(stdin);          gets(hoten);
    cout<<"ngay sinh la ";                  fflush(stdin);          gets(ns);
    cout<<"que quan la ";                   fflush(stdin);          gets(qq);
}
void nguoi::xuat()
{
    cout<<left<<setw(30)<<hoten<<left<<setw(15)<<ns<<left<<setw(15)<<qq;
}
class sinhvien:public nguoi
{
private:
    int msv;
    char nganh[30];
    int khoahoc;
public:
    void nhap();
    void xuat();
    friend void Check(lop b);
    friend void sx(lop &c);
};
void sinhvien::nhap()
{
    cout<<"msv la ";                                                cin>>msv;
    cout<<"nganh la ";                      fflush(stdin);          gets(nganh);
    cout<<"khoa hoc la ";
    cin>>khoahoc;
    nguoi::nhap();
    
}
void sinhvien::xuat()
{
    nguoi::xuat();
    cout<<left<<setw(12)<<msv<<left<<setw(30)<<nganh<<left<<setw(30)<<khoahoc;
    cout<<endl;
}
class lop
{
private:
    char mlh[20];
    char tenlh[30];
    char ngaymo[12];
    sinhvien a[100];
    int n;
    char giaovien[40];
public:
    void nhap();
    void xuat();
    friend void Check(lop b);
    friend void sx(lop &c);
    
};
void lop::nhap()
{
    cout<<"ma lop hoc la ";                 fflush(stdin);          gets(mlh);
    cout<<"ten lop hoc la ";                fflush(stdin);          gets(tenlh);
    cout<<"Ngay mo la ";                    fflush(stdin);          gets(ngaymo);
    cout<<"giao vien ";                     fflush(stdin);          gets(giaovien);
    cout<<"n ";                                                     cin>>n;
    cout<<"cac sinh vien la ";
    cout<<endl;
    for(int i=0;i<n;i++)
        a[i].nhap();
}
void lop::xuat()
{
    cout<<"ma lop hoc la ";
    cout<<mlh<<endl;
    cout<<"ten lop hoc la ";
    cout<<tenlh<<endl;
    cout<<"Ngay mo la ";
    cout<<ngaymo<<endl;
    cout<<"giao vien ";
    cout<<giaovien<<endl;
    cout<<"so sinh vien la ";
    cout<<n<<endl;
    cout<<"cac sinh vien la ";
    cout<<endl;
    cout<<left<<setw(30)<<"ho ten";
    cout<<left<<setw(15)<<"ngay sinh";
    cout<<left<<setw(15)<<"que quan ";
    cout<<left<<setw(12)<<"msv";
    cout<<left<<setw(30)<<"nganh";
    cout<<left<<setw(30)<<"khoahoc"<<endl;
    
    for(int i=0;i<n;i++)
        a[i].xuat();

}
void Check(lop b)
{
    int dem=0;
    for(int i=0;i<b.n;i++)
    {
        if(b.a[i].khoahoc==11)dem++;
    }
    if(dem !=0)
    {
        cout<<"S0 SV KHOA 11 LA "<<dem;
    }
    else cout<<"khong co sv khoa 11 ";
    cout<<endl;
}
void sx(lop &c)
{
    for(int i=0;i< c.n;i++)
    {
        for(int j=i+1;j <c.n;j++)
        {
            if(c.a[i].khoahoc>c.a[j].khoahoc)
            {
                sinhvien td=c.a[i];
                c.a[i]=c.a[j];
                c.a[j]=td;
                
            }
                
        }
    }
}
int main()
{
    lop a;
    a.nhap();
    a.xuat();
    Check(a);
    sx(a);
    a.xuat();
}


