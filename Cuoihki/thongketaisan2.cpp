#include<iostream>
#include<iomanip>
using namespace std;

class nhithuc{
    private:
        float a, b;
    public:
        nhithuc(float a, float b);
        nhithuc();
        operator -();
        
};
nhithuc::operator-(){
    a = -a;
    b = -b;
}
istream& operator >>(istream& in, nhithuc &y){
    cout << "Nhap a: "; in >> a;
    cout << "Nhap b: "; in >> b;
    
}
signed main(){

}