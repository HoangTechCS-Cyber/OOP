#include<iostream>
#include<iomanip>

using namespace std;

class Vector{
    private:
        int n;
        float a;
    public:
        Vector();
        Vector(int c, float d);
        ~Vector();
        friend istream& operator >>(istream& in, Vector& y);
        friend ostream& operator <<(ostream& out, Vector y);
}
Vector::Vector(){
    n = 0;
    a = 0;
}
Vector::Vector(int c, float d){
    n = c;
    a = d;
}
Vector::~Vector(){
    n = 0;
    a = 0;
}

int main(){

}