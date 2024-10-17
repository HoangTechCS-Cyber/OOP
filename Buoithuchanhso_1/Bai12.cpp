#include<bits/stdc++.h>
using namespace std;

class HCN
{
     private:
        float D;
        float R;
     public:
        void Nhap();
        void VE();
        float DienTich();
        float ChuVi();
};
void HCN::Nhap()
{
    cout << "Nhap chieu dai hcn: ";             cin >> D;
    cout << "Nhap chieu rong HCN: ";             cin >> R;
}
void HCN::VE()
{
    for(int i =0; i < R;i++)
        {for(int i = 0; i < D; i++)
                {
                    cout << "*";
                }
                cout << endl;
        }
}
float HCN::DienTich()
{
    return D*R;
}
float HCN::ChuVi()
{
    return (D+R)*2;
}

signed main()
{
    HCN x;
    x.Nhap();
    x.VE();
    cout << "Dien tich cua hinh chu nhat la: "<< x.DienTich()<< endl;
    cout << "Chu vi cua hinh chu nhat la: "<< x.ChuVi()<< endl;
}