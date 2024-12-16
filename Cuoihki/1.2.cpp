#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class ThuaDat{
    private:
        float chieudai;
        float chieurong;
        float giatien;
    public:
        ThuaDat();
        ThuaDat(float a, float b, float c);
        double operator *();    //
        bool operator ==(ThuaDat a);
        friend istream& operator >>(istream& in, ThuaDat &x);
        friend ostream& operator <<(ostream& out, ThuaDat x);
};
ThuaDat::ThuaDat(){
    chieudai = 0; 
    chieurong = 0;
    giatien = 0;
}
ThuaDat::ThuaDat(float a, float b, float c){
    chieudai = a;
    chieurong = b;
    giatien = c;
}
double ThuaDat::operator*(){
    return chieudai * chieurong;
}
bool ThuaDat::operator==(ThuaDat a){
    return chieudai * chieurong == a.chieudai *a.chieurong && giatien ==a.giatien;
}
istream& operator >>(istream& in, ThuaDat &x ){
    cout << "Chieu dai: ";      in >> x.chieudai;
    cout << "Chieu rong: ";     in >> x.chieurong;
    cout << "giatien: ";        in >> x.giatien;
    return in;
}
ostream& operator <<(ostream& out, ThuaDat x){
    cout << "Chieu dai: " << x.chieudai;
    cout << "Chieu rong: "<< x.chieurong;
    cout << "gia tien: "<< x.giatien;
    return out;
}
signed main(){
    ThuaDat x, y;
    cout << "Nhap thong tin thua dat 1: " << endl;
    cin >> x;
    cout << "Nhap thong tin thua dat 2: "<< endl;
    cin >> y; 
    cout << "Thong tin hai thua dat la: "<< endl;
    cout << x << endl << y<< endl;
    if(x == y) cout << "Hai thua dat co dien tich va gia tien bang nhau"; else cout << "False"<< endl;
}


