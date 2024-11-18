// Bai11_Dientichchuvihinhtron2
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
    
cout << "TINH DIEN TICH VA CHU VI HINH TRON \n";
double bankinh, chuvi, dientich;


cout << "Nhap ban kinh :"; cin >> bankinh;


chuvi = 2 * M_PI * bankinh;
dientich = M_PI * bankinh * bankinh;

cout << "Chu vi:" << chuvi << endl;
cout << "Dien tich:" << dientich << endl;
return 0;
}
