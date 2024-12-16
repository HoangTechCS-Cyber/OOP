#include<iostream>

using namespace std;

class PhuongTien{
    protected:
        char MaPT[30];
        char Loai[30];
        float Gia;
        char Hang_SX[30];
    public:
        void Nhap();
        void Xuat();
    
}
void PhuongTien::Nhap(){
    cout << "Ma Phuong Tien: ";                            cin.ignore(); cin.getline();
    cout << "Loai: ";                                      cin.ignore(); cin.getlien();
    cout << "Gia: ";                                        cin >> Gia;
    cout << "Hang Sx: ";                                   cin.ignore(); cin.getline(); 
}
class XeMay{
    
}
class BaiXe{
    private:
        char MaBX[30];
        char TenBX[30];
        float DienTich;

}
signed main(){

}