//  Xây dựng lớp phân số với các thuộc tính ts, ms và các phương thức:
// PTKT: cho các thuộc tính của lớp phân số
// - PT toán tử + (hàm toán tử cộng)
// - Hàm toán tử đổi dấu một phân số 
// - Hàm toán tử nhập : nhập các giá trị của tử số và mẫu số 
// - hàm toán tử xuất đưa ra thông tin đưa phân số ra màn hình dưới dạng tử số trên mẫu số
// main: nhập hai ps(), xuất ps, sau đó lưu vào tệp các phân số là tổng, hiệu vừa đổi dấu

#include<bits/stdc++.h>

using namespace std;

#define int long long 
#define ld long double
#define For(i,a,b) for(int i =a; i<=b;i++)
#define pii pair<int, int> 

const int MOD = 1e9+7;
const int N = 100;
const int maxn = 150000;

class phanso
{
private:
	int ts;
	int ms;
public:
	phanso();// phuong thuc khoi tao khong doi-khoi gan gt bandau
	phanso(int t, int m);// ptktk co doi- gan giatri bat ky
	//nhap(); ko sd ma su dung cin >>
	// void xuat(); khong sd ma su dung cout << 
	friend istream& operator >> (istream& in, phanso &a); // ham toan tu nhap
	friend ostream& operator << (ostream& out, phanso b); // ham xuat
	// kieu tra ve operator kyhieutoantu (cacdoiso)
	// phanso operator  + (phanso b); // pttt = so ngoi - 1 = doi so
	friend phanso operator + (phanso a, phanso b); // ham toan tu = so ngoi = so doi
	phanso operator !();


};
phanso::phanso()
{
	ts = 0;
	ms = 1;

}
phanso::phanso(int t, int m);
{
	ts =t;
	ms = m;
}
//phanso phanso::operator + (phanso b)
// {
// 	phuong so kq;
// 	kq.ts = ts*b.ms+b.ts*ms;
// 	kq.ms = ms*b.ms;

// 	return kq;
// }
// }
phanso operator + (phanso a, phanso b)
{
	phanso kq;
	kq.ts = a.ts *b.ms + b.ts*a.ms;
	kq.ms = a.ms*b.ms;
return kq;
}
phanso phanso::operator !()
{
	phanso kq;
		kq.ts=-ts;
		kq.ms = ms;
return kq;
}
istream& operator>> (istream& in, phanso &a)
{
	cout<< "\n Nhap ts: "; in >> a.ts;
	cout << "\n Nhap ms: "; in >> a.ms;
return in;
}
ostream& operator<< (ostream& out, phanso b)
{
	out << "\n Phan so: "<< b.ts << "/" << b.ms << endl;
return out;
}
signed main()
{
#ifndef LOCAL
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#endif
    // GetInput();
    // solve();
    // rep();
    phanso ps1(1,2); //goi ptkt co doi 
    phanso ps2(5,6); // goi ptkt co doi
    phanso ps5;
    cout << "\n Nhap phaso ps5: ";
    cin >> ps5; // goi ham toan tu nhap;

    ps3 = ps1 + ps2;
    cout << ps1;
    cout << ps2;
    cout << "\n Ket qua cong 2 phan so: ";
    cout << ps3;
    ps4 =! ps2; // giu pttt - su dung pttt doi dau
    cout << "\n Ket qua doi dau phan so thu 2: ";
    cout << ps4;
    
}