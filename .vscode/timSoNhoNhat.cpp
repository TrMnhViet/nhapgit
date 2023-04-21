#include <iostream>
using namespace std;

void Nhap(int &a, int &b, int &c) {
    cout << "Nhap so: ";
    cin >> a >> b >> c; 
}

int LonNhap (int &a, int &b, int &c) {
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int a,b,c;
    Nhap(a,b,c);
    cout << "So lon nhat la: " << LonNhap(a,b,c);
    return 0;
}
