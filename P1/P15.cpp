#include<bits/stdc++.h>
using namespace std;

class Mang{
    private:
        int arr[50];
        int n;
    public:
        void Nhap();
        void Xuat();
        void sort_();
};
void Mang::Nhap(){
    cout << "Nhap do dai mang: "; cin >> n;
    cout << "Nhap cac phan tu cua mang: " << "\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
void Mang::Xuat(){
    cout << "Mang sau khi sap xep la: "<< endl;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
void Mang::sort_(){
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++ )
            if( arr[j] < arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

int main(){
    Mang a;
    a.Nhap();
    a.sort_();
    a.Xuat();
}