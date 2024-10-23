//
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class sv//nodea ádasd
{
    private:
        int msv;
        char Hoten[50];
        int Tuoi;
        float Diem;
    public:
        void Nhap();
        void Xuat();
};
void sv::Nhap()
{
    cout << "Nhap msv: ";                       cin >> msv;
    cout << "Nhap Hoten: ";     cin.ignore(); cin.getline(Hoten,50);
    cout << "Nhap Tuoi: ";                      cin >> Tuoi;
    cout << "Nhap Diem: ";                      cin >> Diem;
}
void sv::Xuat()
{
    cout <<left<< setw(20)<<msv
         << setw(30)<<Hoten
         << setw(10)<<Tuoi
         << setw(10)<<Diem<<endl;
}
int main()
{
    sv a,b;
    
    a.Nhap();
    b.Nhap();
    cout <<left<< setw(20)<<"ma sinh vien"
         << setw(30)<<"Ho va Ten"
         << setw(10)<<"Tuoi"
         << setw(10)<<"Diem"<<endl;
    a.Xuat();
    b.Xuat();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> negative, nt;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < 0) {
            negative.push_back(x); 
        } else {
            nt.push_back(x); 
        }
    } 
    sort(negative.begin(), negative.end(), greater<int>()); 
    sort(nt.begin(), nt.end());
    for (int x : negative) {
        cout << x << " ";
    }
    for (int x : nt) {
        cout << x << " ";
    }
    
    cout << endl;

    return 0;
}
