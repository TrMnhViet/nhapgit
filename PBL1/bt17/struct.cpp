#include<iostream>
using namespace std;
struct nhanvien{
    char hoten[50];
    float heso,luong;

};
void nhap(nhanvien &nv) {
 
    
    cout << "nhap ho va ten"<<endl;
    cin.ignore();
    cin.getline(nv.hoten,50);
    cout << "moi nhap he so";
    cin>>nv.heso;
}
void tinh(nhanvien &nv,float &luongcoban){
    
        nv.luong=nv.heso*luongcoban;

    
   }
void xuat(nhanvien &nv){
    
        cout<<"luong cua nhan vien ";
        cout << nv.luong;

    
}
int main(){
    float luongcoban;
    nhanvien nv[100];
    int n;
    cout <<"nhap so luong nhan vien"<<endl;
    cin>>n;
    cout<<"nhapmuc luong co ban"<<endl;
    cin >>luongcoban; 
    for (int i=0;i<n;i++){
        nhap(nv[i]);
        tinh(nv[i],luongcoban);
    
    }
    for (int i=0;i<n;i++){
        xuat(nv[i]);
    }
   
}