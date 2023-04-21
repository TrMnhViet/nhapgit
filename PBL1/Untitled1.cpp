#include<iostream>
using namespace std;
struct hinhchunhat{
    float d;
    float r;
};
void nhap(hinhchunhat &hcn){
    cin>>d>>r;

}
float tinhchuvi(hinhchunhat &hcn){
    return (d+r)*2;
}
int main(){
    hinhchunhat hcn;
    hcn.nhap(hcn);
    cout <<hcn.tinhchuvi(hcn);
}
