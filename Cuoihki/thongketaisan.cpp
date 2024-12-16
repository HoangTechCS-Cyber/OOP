#include<iostream>
#include<iomanip>
#include<set>
using namespace std;

class Phieu;
class TaiSan{
    private:
        char Mataisan[30];
        char TenTaisan[30];
        char Donvitinh[30];
        float GiaTri;
    public:
        void Nhap();
        void Xuat();
        friend class Phieu;
};
void TaiSan::Nhap(){
    cout << "Ma Tai San: ";                             cin.ignore(); cin.getline(Mataisan, 30);
    cout << "Ten Tai San: ";                            cin.ignore(); cin.getline(TenTaisan, 30);
    cout << "Don vi tinh: ";                            cin.ignore(); cin.getline(Donvitinh, 30);
    cout << "Gia tri: ";                                cin >> GiaTri;
}   

void TaiSan::Xuat(){
    cout << left << setw(15)<< Mataisan << setw(15)<< TenTaisan << setw(15)<< Donvitinh << setw(15)<< GiaTri << endl;
    
}
class Phieu{
    private:
        char NgayLap[30];
        char NguoiLap[30];
        char MaDvi[30];
        char Tendvi[30];
        char DiaChiDvi[30];
        char TruongDvi[30];
        TaiSan x[30];
        int n;
    public:
        void Nhap();
        void Xuat();
};
void Phieu::Nhap(){
    cout << "NgayLap: ";                            cin.ignore(); cin.getline(NgayLap, 30);
    cout << "Nguoi Lap: ";                          cin.ignore(); cin.getline(NguoiLap, 30);
    cout << "Ma Donvi: ";                           cin.ignore(); cin.getline(MaDvi, 30);
    cout << "Ten Donvi: ";                          cin.ignore(); cin.getline(Tendvi, 30);
    cout << "Dia Chi Dvi: ";                        cin.ignore(); cin.getline(DiaChiDvi, 30);
    cout << "Truong dvi: ";                         cin.ignore(); cin.getline(TruongDvi, 30);
    cout << "Nhap so luong tai san: "; cin >> n;
    for(int i = 0; i < n; i++){
        x[i].Nhap();
    }

}
void Phieu::Xuat(){
    cout << left << "TONG CONG TY ABC"<< endl;
    cout << setw(15) << " "<< "Bang Thong Ke Tai San"<< endl;
    cout << left << "Ngay Lap: "<< setw(15)<< NgayLap << "Nguoi Lap: "<< NguoiLap<< endl;
    cout << left << "Ma donvi: "<< setw(15) << MaDvi << "Ten Don Vi: "<< Tendvi<< endl;
    cout << left << "Dia chi don vi: "<< setw(15)<< DiaChiDvi << "Truong Don vi: "<< TruongDvi<< endl;
    cout << "Chi tiet"<< endl;
    cout << left << setw(15)<< "Ma Tai San "<< setw(15)<< "Ten Tai San"<< setw(15)<< "Don Vi Tinh"<< "Gia Tri"<< endl;
    for(int i = 0; i < n;i++) x[i].Xuat();
    int tong = 0;
    for(int i = 0; i < n; i++) tong+=x[i].GiaTri;
    cout <<left << setw(45) <<"Tong so luong thiet bi: "<< tong<< endl;
    cout << endl;
    cout << setw(15)<< "Giam Doc"<< setw(15)<<"Phong Quan Ly" << setw(15)<< "Nguoi Lap"<< endl;
}

signed main(){
    Phieu x;
    x.Nhap();
    x.Xuat();
}