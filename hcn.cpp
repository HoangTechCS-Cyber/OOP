/*Xây dựng Hình hộp chữ nhật có các thuộc tính chiều dài, chiều rộng, chiều cao,
Hãy cài đặt lớp hình hộp chữ nhật với các thuộc tính nêu trên và:
PTKT: có đối và không đối để khởi gán giá trị cho các thuộc tính.
Pttn/x: thông tin một hình hộp chữ nhật
Phương thức toán tử trả về: giá trị true nếu hai hình hộp chữ nhật có thể tích bằng nhau,
ngược lại trả về false.
Pttt trả về true nếu một hình hộp chữ nhật là hình lập phương(có độ dài, rộng cao đều bằng nhau)
ngược lại trả về false
Hàm main: sử dụng phương thức/ toán tử ở trên đfể nhập vào thông tin hình hộp chữ nhật trên. 
Kiểm tra xem hai hình hộp chữ nhật có thể tích bằng nhau hay không và có hình nào là hình lập phương
hay không. Toàn bộ kết quả được in ra màn hình và vào tệp
Công thức tính thể tích hình hộp chữ nhật là V = a.b.c
*/
#include<bits/stdc++.h>

using namespace std;

class HinhHopChuNhat {
private:
    double chieuDai;
    double chieuRong;
    double chieuCao;

public:
    // Phương thức khởi tạo không đối
    HinhHopChuNhat() {
        chieuDai = 1;
        chieuRong = 1;
        chieuCao = 1;
    }

    // Phương thức khởi tạo có đối
    HinhHopChuNhat(double dai, double rong, double cao) {
        chieuDai = dai;
        chieuRong = rong;
        chieuCao = cao;
    }

    // Phương thức nhập thông tin hình hộp chữ nhật
    friend istream& operator >> (istream &in, HinhHopChuNhat &hinhHop) {
        cout << "\nNhập chiều dài: "; in >> hinhHop.chieuDai;
        cout << "Nhập chiều rộng: "; in >> hinhHop.chieuRong;
        cout << "Nhập chiều cao: "; in >> hinhHop.chieuCao;
        return in;
    }

    // Phương thức xuất thông tin hình hộp chữ nhật
    friend ostream& operator << (ostream &out, HinhHopChuNhat hinhHop) {
        out << "\nChiều dài: " << hinhHop.chieuDai
            << ", Chiều rộng: " << hinhHop.chieuRong
            << ", Chiều cao: " << hinhHop.chieuCao << endl;
        return out;
    }

    // Phương thức tính thể tích hình hộp chữ nhật
    double tinhTheTich() const {
        return chieuDai * chieuRong * chieuCao;
    }

    // Phương thức kiểm tra hai hình hộp chữ nhật có thể tích bằng nhau
    bool operator == (const HinhHopChuNhat &hinhHop) const {
        return this->tinhTheTich() == hinhHop.tinhTheTich();
    }

    // Phương thức kiểm tra hình hộp chữ nhật có phải là hình lập phương
    bool laHinhLapPhuong() const {
        return (chieuDai == chieuRong && chieuRong == chieuCao);
    }
};

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    HinhHopChuNhat hinhHop1, hinhHop2;

    // Nhập thông tin hai hình hộp chữ nhật
    cout << "\nNhập thông tin hình hộp chữ nhật 1:";
    cin >> hinhHop1;

    cout << "\nNhập thông tin hình hộp chữ nhật 2:";
    cin >> hinhHop2;

    // Xuất thông tin hai hình hộp chữ nhật
    cout << "\nThông tin hình hộp chữ nhật 1:";
    cout << hinhHop1;
    cout << "Thể tích: " << hinhHop1.tinhTheTich() << endl;

    cout << "\nThông tin hình hộp chữ nhật 2:";
    cout << hinhHop2;
    cout << "Thể tích: " << hinhHop2.tinhTheTich() << endl;

    // Kiểm tra thể tích của hai hình hộp chữ nhật có bằng nhau không
    if (hinhHop1 == hinhHop2) {
        cout << "\nHai hình hộp chữ nhật có thể tích bằng nhau." << endl;
    } else {
        cout << "\nHai hình hộp chữ nhật có thể tích khác nhau." << endl;
    }

    // Kiểm tra xem có hình hộp nào là hình lập phương không
    if (hinhHop1.laHinhLapPhuong()) {
        cout << "Hình hộp chữ nhật 1 là hình lập phương." << endl;
    } else {
        cout << "Hình hộp chữ nhật 1 không phải là hình lập phương." << endl;
    }

    if (hinhHop2.laHinhLapPhuong()) {
        cout << "Hình hộp chữ nhật 2 là hình lập phương." << endl;
    } else {
        cout << "Hình hộp chữ nhật 2 không phải là
