#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class Nguoi{
    protected:
        char hoten[30];
        int tuoi;
        char gioitinh[30];
    public:
        void Nhap();
        void Xuat();
};

void Nguoi::Nhap(){
    cout << "Ho ten: ";                                 cin.ignore(); cin.getline(hoten, 30);
    cout << "Tuoi: ";                                   cin >> tuoi;
    cout << "gioi tinh: ";                              cin.ignore(); cin.getline(gioitinh, 30);
}
void Nguoi::Xuat(){
    cout << left << setw(15)<< hoten << setw(15)<< tuoi << setw(15) << gioitinh;
}

class NhanVien:public Nguoi{
    private:
        char manv[30];
        char chucvu[30];
        float luong;
    public:
        void Nhap();
        void Xuat();
};
void NhanVien::Nhap(){
    Nguoi::Nhap();
    cout << "ma nhan vien: ";                       cin.ignore(); cin.getline(manv, 30);
    cout << "chucvu: ";                             cin.ignore(); cin.getline(chucvu, 30);
    cout << "luong: ";                              cin >> luong;

}
void NhanVien::Xuat(){
    Nguoi::Xuat();
    cout << left << setw(15)<< manv << setw(15)<< chucvu << setw(15) << luong << endl;
}


class CongTy{
    private:
        char MaCT[30];
        char DiaChi[30];
        NhanVien x[30];
        int n;
    public:
        void Nhap();
        void Xuat();
};
void CongTy::Nhap(){
    cout << "Ma Cty: ";                     cin.ignore(); cin.getline(MaCT, 30);
    cout << "Dia Chi: ";                    cin.ignore(); cin.getline(DiaChi, 30);
    cout << "Nhap so luong nhan vien: "; cin >> n;
    for(int i = 0; i < n; i++){
        x[i].Nhap();
    }
}
void CongTy::Xuat(){
    cout << left << "Ma Cty: " << MaCT << endl;
    cout << left << "Dia Chi: "<< DiaChi << endl;
    cout << "Thong tin cac nhan vien la: "<< endl;
    cout << left << setw(15)<< "HoTen"<< setw(15)<< "Tuoi"<< setw(15)<< "Gioi tinh"<<setw(15)<< "Ma Nvien"<< setw(15)<< "Chuc Vu" << "Luong"<< endl;
    for(int i = 0; i < n; i++){
        x[i].Xuat();
    }
}
signed main(){
    CongTy x;
    x.Nhap();
    x.Xuat();
}   