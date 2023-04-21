#include<iostream>
using namespace std;
float giaithua(int n){
    if(n==0){
        return 1;
    }
    else {
        return n*giaithua(n-1);
    }
}
int main(){
    int x;
    float luythua=1;
    int n;
    float sum=1;
    cout<<" Trinh Minh Viet 22KTMT1"<<endl;
    cout<<"nhap lan luot so nguyen x va n: ";
    cin >>x>>n;
    for(int i=1;i<=n;i++){
        luythua=luythua*x;
        giaithua(i);
        sum+=luythua/giaithua(i);
    }
    
        cout <<sum;
        return 0;
    
    
}