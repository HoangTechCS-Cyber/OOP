//
#include <iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class phanso
{
private:
    int ts;
    int ms;
public:
    phanso();
    phanso(int t,int m);
    friend istream & operator>>(istream &in,phanso &a);
    friend ostream & operator<<(ostream &out,phanso b);
    float operator++();
    friend phanso operator*(phanso a,phanso b);
    
};
phanso::phanso()
{
    ts=0;
    ms=1;
}
phanso::phanso(int t,int m)
{
        ts=t;
        ms=m;
}

phanso operator *(phanso a,phanso b)
{
    phanso kq;
    kq.ts=a.ts*b.ts;
    kq.ms=a.ms*b.ms;
    return kq;
    
}
float phanso::operator++()
{
    return (float)ts/ms;
}

istream & operator>>(istream &in,phanso &a)
{
    cout<<"\nNhap tu so ";  in>>a.ts;
    cout<<"NHap ms "; in>>a.ms;
    return in;
    
}
ostream & operator<<(ostream & out,phanso b)
{
    out<<b.ts<<"/"<<b.ms<<endl;
    return out;
}
int main()
{

    phanso ps1(1,2);
    phanso ps2(5,6);
    phanso ps3,ps4;
    cout<<"nhap phan so ps1";
    cin>>ps1;
    cout<<"nhap phan so ps2";
    cin>>ps2;
    ps3=ps1*ps2;
    cout<<"ps1 la "<<ps1;;
    cout<<"ps2 la "<<ps2;
    cout<<"ket qua tich 2 ps la " <<ps3<<"="<<++ps3;
    ofstream files("PHANSO.txt",ios::out);
    
    if(files.is_open())
    {
        files<<ps3<<"="<<++ps3;
        files.close();
        cout<<"\nda luu vao tep";
    }
    else cout<<"Ko mo dc files";
}
