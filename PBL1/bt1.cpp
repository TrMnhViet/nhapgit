#include <iostream>
using namespace std;
void nhap(int &m,int &n){
    cout<< "nhap m,n"<<endl;
    cin >>m>>n; 
}
void tinhmatran(int &m,int &n,int x[100][100]){
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if((i+j)%2==0){
                 x[i][j]=2*i*i*i+3*j*j*j*j+4;
            }
            else {
                 x[i][j]=5*i*i+6*j+7;
            }
        }
    }
}
xuat (int &m,int &n,int x[100][100]){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            
            cout <<x[i][j]<<"   ";
        }
        cout <<endl;
    }
}
int main(){
    int m,n;
    int x[100][100];
    nhap(m,n);
    tinhmatran(m,n,x);
    xuat(m,n,x);
    return 0;
    
}