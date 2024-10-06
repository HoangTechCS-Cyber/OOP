#include <bits/stdc++.h>
using namespace std;

// Định nghĩa cấu trúc NS (Ngày Sinh)
struct NS {
    int Ngay;
    int Thang;
    int Nam;
};

class KH {
private:
    string ht;  
    NS ns;       
    string cmt;   
    string k;     

public:
    void nhap();

    void xuat() const;

    bool operator<(const KH& other) const;

    bool sinhThang12() const;
};

void KH::nhap() {
 

    cout << "Nhap Ho Ten KH: ";                  cin.ignore(); getline(cin, ht);

    cout << "Nhap Ngay Sinh (dd mm yyyy): ";     cin >> ns.Ngay >> ns.Thang >> ns.Nam;
    
    cout << "Nhap So CMT: ";                     cin.ignore();getline(cin, cmt);

    cout << "Nhap Ho Khau: ";                    cin.ignore();getline(cin, k);
}

void KH::xuat() const {
    string date = "";
    if(ns.Ngay < 10) date += "0";
    date += to_string(ns.Ngay) + "/";
    if(ns.Thang < 10) date += "0";
    date += to_string(ns.Thang) + "/";
    date += to_string(ns.Nam);

    cout << left    << setw(30) << ht
                    << setw(12) << date
                    << setw(15) << cmt
         << left    << setw(50) << k
         << endl;
}

// Operator overloading để so sánh họ tên
bool KH::operator<(const KH& other) const {
    return ht < other.ht;
}

// Hàm kiểm tra tháng sinh là 12
bool KH::sinhThang12() const {
    return ns.Thang == 12;
}

int main() {
    int n;
    cout << "Nhap so luong khach hang: ";
    cin >> n;
    if(n <= 0) {
        cout << "So luong khach hang phai la so nguyen duong.\n";
        return 1;
    }

    vector<KH> ds(n);

    for(int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin khach hang thu " << i + 1 << ":\n";
        ds[i].nhap();
    }

    sort(ds.begin(), ds.end());

    cout << "\n--- Danh sach khach hang sau khi sap xep theo ho ten ---\n";
    cout << left << setw(30) << "Ho Ten"
                 << setw(12) << "Ngay Sinh"
                 << setw(15) << "CMT"
         << left << setw(50) << "Ho Khau"
         << endl;
    cout << string(107, '-') << endl;
    for(const auto &kh : ds) {
        kh.xuat();
    }

    cout << "\n--- Danh sach khach hang co sinh nhat thang 12 ---\n";
    cout << left << setw(30) << "Ho Ten"
                 << setw(12) << "Ngay Sinh"
                 << setw(15) << "CMT"
         << left << setw(50) << "Ho Khau"
         << endl;
    cout << string(107, '-') << endl;
    bool found = false;
    for(const auto &kh : ds) {
        if(kh.sinhThang12()) {
            kh.xuat();
            found = true;
        }
    }
    if(!found) {
        cout << "Khong co khach hang nao co sinh nhat thang 12.\n";
    }

    return 0;
}
