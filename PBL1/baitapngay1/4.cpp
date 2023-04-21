#include <iostream>
using namespace std;
class dagiac{
    private:
    float *canh;
    int socanh;
    float chuvi;
    public:
    dagiac(int socanh){
        this->socanh=socanh;
        canh=new float[socanh];
       
        }
    
    ~dagiac(){
        delete [] canh;
    }
    void nhap(){
        for(int i=0;i<socanh;i++){
            cout<<"nhap chieu dai canh "<<i+1<<endl;
            cin >>canh[i];
        }
    }
     float tinhchuvi(){
        chuvi=0;
        for(int i=0;i<socanh;i++){
            chuvi+=canh[i];
           
        }
        return chuvi;
    }
    void xuat(){
        for(int i=0;i<socanh;i++){
            cout<<"do dai canh thu "<<i+1<<" "<<canh[i]<<endl;
        }
        cout<<"chu vi cua da giac: "<<tinhchuvi()<<endl;
    }
   

};
int main(){
    dagiac dg1(3),dg2(4),dg3(5);
    dg1.nhap();
    dg1.xuat();
    dg1.tinhchuvi();
    dg2.nhap();
    dg2.xuat();
    dg2.tinhchuvi();
    dg3.nhap();
    dg3.tinhchuvi();
    dg3.xuat();
    float temp;
   float a[]={dg1.tinhchuvi(),dg2.tinhchuvi(),dg3.tinhchuvi()};
   for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            
        }
    }
   }
    for(int i=0;i<3;i++){
        cout <<a[i]<<"  ";
    }
    return 0;

}