#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class ptb2{
    private:
        float a, b, c;
    public:
        friend istream& operator >>(istream& in, ptb2 &x);
        friend ostream& operator <<(ostream& out, ptb2 x);
        ptb2 operator -(ptb2 y);
        float operator --();
};

istream& operator >>(istream& in, ptb2 &x){
    cout << "Nhap lan luot cac he so a, b, c: ";    in >> x.a >> x.b >> x.c;
    return in;
}
ostream& operator <<(ostream& out, ptb2 x){
    cout << "Phuong trinh tren la: " << x.a << "*x^2 + "<< x.b << "*x + "<<x.c << endl;
    return out;
}
ptb2 ptb2::operator -(ptb2 y){
    ptb2 result;
    result.a =  a - y.a;
    result.b =  b - y.b;
    result.c =  c - y.c;
    return result;
}

float ptb2::operator --(){
    return (a + b +c)/3;
}
signed main(){
    ptb2 x, y;
    cout << "Phuong trinh x: "<< endl;
    cin >> x;
    cout << "Phuong trinh y: "<< endl;
    cin >> y;
    ptb2 k = x - y;
    cout << "Phuong trinh k: " << k<< endl;
    cout << "gia tri trung binh cac he so cua k la: " << --k<< endl;
}