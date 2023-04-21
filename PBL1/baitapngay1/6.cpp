#include<iostream>
using namespace std;
void nhap(float &x,float &y,float &z){
    cout<<"nhap lan luot ba so x y z:"<<endl;
    cin >> x>>y >>z;
}
void xuat(float &x,float &y,float &z){
    cout << "gia tri lan luot cua x y z:"<<endl;
    cout <<x<<" "<<y<<"  "<<z;
}
float max(float &d, float &e){
    if(d>e){
        return d;
    }
    else return e;
}
float tinh (float &x,float &y,float &z){
    float a=max(x,y);
    float b=max(y,z);
    float c=max(x,(y*y+z*z));
    float  t=(a-b)/c;
    return t;
    
}
float tinhtong(float &t){
    float sum=0;
    float luythua=1;
    if(t>0){
        for (int i=0;i<t;i++){
            if(i==0){
                return 1;
            }
            else{
                return luythua=luythua*2;
            }
            if(luythua<t){
                sum+=1/luythua;
            }

        }
    }
    return sum;
}
int main(){
    float x,y,z,t;
    nhap(x,y,z);
    xuat(x,y,z);
    cout<<"gia tri cua t la "<<tinh(x,y,z);
    cout <<"Sum:"<<tinhtong(t);
    return 0;
}