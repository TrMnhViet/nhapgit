#include <iostream>
#include<math.h>
using namespace std;

class phanso{
	int tu,mau;
	public:
	phanso();
	phanso(int tu,int mau);
	void nhap(phanso& ,phanso &);
	float tinhtong(phanso&,phanso&);
	friend float tinhtich(phanso&,phanso&);
	void xuat(phanso&,phanso&);
};
phanso::phanso(){
	tu=1;mau=1;
}
phanso::phanso(int tu ,int mau){
	this->tu=tu;
	this->mau=mau;
}
void phanso::nhap(phanso &ps1,phanso &ps2){
	cout<<"nhap vao lan luot tu va mau cua phan so 1:"<<endl;
	cin>>ps1.tu>>ps1.mau;
	cout<<"nhap vao lan luot tu va mau cua phan so 2:"<<endl;
	cin>>ps2.tu>>ps2.mau;
}
float phanso::tinhtong(phanso &ps1,phanso &ps2){
	return (float)(ps1.tu*ps2.mau+ps2.tu*ps1.mau)/(ps1.mau*ps2.mau);
}
float tinhtich(phanso &ps1,phanso &ps2){
	return (float)(ps1.tu*ps2.tu)/(ps1.mau*ps2.mau);
}
void phanso::xuat(phanso &ps1,phanso &ps2){
	cout<<"tong cua hai phan so la:";
	cout <<tinhtong(ps1,ps2);
	cout <<"tich cua hai phan so";
	cout <<tinhtich(ps1,ps2);
	
}

int main(){
phanso ps1,ps2,ps;
ps.nhap(ps1,ps2);
ps.xuat(ps1,ps2);
return 0;
}