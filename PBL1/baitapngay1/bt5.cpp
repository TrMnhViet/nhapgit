#include<iostream>
#include<math.h>
using namespace std;
class dathuc{
    private:
    float a,b,c;
    public:
    dathuc (float d=0.0,float e=0.0,float f=0){
        cout<<"ham khoi tao doi so mac dinh duoc goi"<<endl;
        setabc(d,e,f);
    }
    dathuc &setabc(float d,float e,float f){
        seta(d),setb(e),setc(f);
        return *this;
    }    
    dathuc &seta(float d){
        cout <<"hay nhap he so a:"<<endl;
        cin>>d;
        a=d;
        return *this;
    }
    dathuc &setb(float e){
        cout <<"hay nhap he so b:"<<endl;
        cin>>e;
        b=e;
        return *this;
    }
    dathuc &setc(float f){
        cout <<"hay nhap he so c:"<<endl;
        cin>>f;
        c=f;
        return *this;
    }
    float geta()const{
        return a;
    }
    float getb()const{
        return b;
    }
    float getc()const{
        return c;
    }

    void timnghiem(){
        if(a==0){
            cout <<"nghiem duy nhat la:"<<-c/b;
        }
        else{
            float denta=b*b-4*a*c;
            if (denta<0){
                cout <<"phuong trinh vo nghiem"<<endl;

            }
            else if(denta==0){
                cout <<"Phuong trinh co nghiem kep la"<<-b/(2*a)<<endl;
            }
            else{
                cout<<"nghiem thu nhat la:"<<(-b-sqrt(denta))/(2*a);
                cout<<"nghiem thu hai la:"<<(-b+sqrt(denta))/(2*a)<<endl;
            }
        
        }
    }
    float getFx(float x){
            return a*x*x+b*x+c;
    }
    
};
int main(){
    float d,e,f,x;
    dathuc dathuc1,dathuc2;
    dathuc1.seta(d).setb(e).setc(f);
    dathuc1.geta();
    dathuc1.getb(); 
    dathuc1.getc();
    dathuc1.timnghiem();
    dathuc1.getFx(-10.5);
    dathuc2.setabc(d,e,f);
    dathuc2.geta();
    dathuc2.getb();
    dathuc2.getc();
    dathuc2.timnghiem();
    dathuc2.getFx(-10.5);
    if(dathuc1.getFx(-10.5)>dathuc2.getFx(-10.5)){
        cout <<"da thuc 1 lon hon";
    }
    else if(dathuc1.getFx(-10.5)==dathuc2.getFx(-10.5)){
        cout <<"hai da thuc bang nhau";
    }
    else {
        cout <<"da thuc 2 lon hon";
    }
}