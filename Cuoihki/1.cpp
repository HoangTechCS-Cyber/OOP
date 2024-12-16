#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Phieu;
class ThietBi{
    private:
        char matb[30];
        char tenthietbi[30];
        int soluong;
        float dongia;
    public:
        void Nhap();
        void Xuat();
        friend void Sort(Phieu &a);
};
void ThietBi::Nhap(){
    cout << "ma thiet bi: ";                            cin.ignore(); cin.getline(matb, 30);
    cout << "ten thiet bi: ";                           cin.ignore(); cin.getline(tenthietbi, 30);
    cout << "so luong: ";                               cin >> soluong;
    cout << "don gia: ";                                cin >> dongia;
}
void ThietBi::Xuat(){
    cout << left << setw(15)<< matb << setw(15)<< tenthietbi << setw(15)<<  soluong << setw(15)<< dongia << soluong * dongia<< endl;
}
class Phieu{
    private:
        char maphieu[30];
        char ngaylap[30];
        char manhanvien[30];
        char hoten[30];
        char maca[30];
        char MaKho[30];
        char DiachiKho[30];
        ThietBi x[30];
        int n;
    public:
        void Nhap();
        void Xuat();
        friend void Sua(Phieu &a);
        friend void Sort(Phieu &a);
};
void Phieu::Nhap(){
    cout << "ma phieu: ";                                   cin.ignore(); cin.getline(maphieu, 30);
    cout << "ngay lap: ";                                   cin.ignore(); cin.getline(ngaylap, 30);
    cout << "Ma nhan vien: ";                               cin.ignore(); cin.getline(manhanvien, 30);
    cout << "hoten: ";                                      cin.ignore(); cin.getline(hoten, 30);
    cout << "Ma Ca: ";                                      cin.ignore(); cin.getline(maca, 30);
    cout << "Ma kho: ";                                     cin.ignore(); cin.getline(MaKho, 30);
    cout << "Dia chi kho: ";                                cin.ignore(); cin.getline(DiachiKho, 30);
    cout << "nhap so luong thiet bi: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "nhap thong tin thiet bi thu: "<< i+1<< endl;
        x[i].Nhap();
    }

}
void Phieu::Xuat(){
    cout << left  << "Ma Phieu: "   << setw(15) << maphieu    << "Ngay lap: " << ngaylap<< endl;
    cout << left << "Ma Nhan Vien: "<< setw(15) << manhanvien << "Ho va ten: "<< setw(15)<< hoten<<  "Ma ca: "<< maca<< endl;
    cout << left << "Ma kho: "      << setw(15) << MaKho      << "Dia chi kho"<< DiachiKho << endl;
    cout << left << setw(15)<< "Ma thiet bi" << setw(15)<< "Ten thiet bi"<< setw(15)<< "So luong"<< setw(15)<< "Dong gia"<< "Thanh tien"<< endl; 
    for(int i = 0; i < n; i++){
        x[i].Xuat();
    }
}
void Sua(Phieu &a){
    strcpy(a.ngaylap, "22/12/2021");
}
void Sort(Phieu &a){
    for(int i = 0; i  < a.n-1; i++)
        for(int j = i+ 1; j < a.n; j++){
            if(a.x[i].dongia > a.x[j].dongia){
                int tmp = a.x[i].dongia;
                a.x[i].dongia = a.x[j].dongia;
                a.x[j].dongia = tmp;
            }
            }
        }
    

signed main(){
    Phieu x;
    x.Nhap();
    cout << "Phieu ban dau la: "<< endl;
    x.Xuat();
    Sua(x);
    Sort(x);
    cout << "Phieu sau khi sua la:"<< endl;
    x.Xuat();

   
}