#include <iostream>
#include <cmath>
using namespace std;

class TamGiac{
	private:
		int a,b,c;
	public:
		void Nhap();
		void Xuat();
		void Tinh_ChuVi_DienTich();
		
};
void TamGiac::Nhap(){
	cout<<"Nhap canh a= ";
	cin>>a;
	cout<<"Nhap canh b= ";
	cin>>b;
	cout<<"Nhap canh c= ";
	cin>>c;
}
void TamGiac::Xuat(){
	cout<<"Cac thong tin vua nhap la:";
	cout<<"a="<<a<<" b="<<b<<" c="<<c;
}
void TamGiac::Tinh_ChuVi_DienTich(){
	if (a >= b + c || b >= a + c || c >= a + b){
        cout << "\nBa canh vua nhap khong phai la canh cua tam giac";
    }else{
    	cout<<"\n\nBa canh cua tam giac la:\n";
		cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;
		float p = (a+b+c) / 2;
		cout<<"\nNua chu vi cua tam giac vua nhap la: "<<p;
		cout<<"\nDien tich cua tam giac vua nhap la: "<<sqrt(p*(p - a)*(p - b)*(p - c));
	}
	
}
int main(){
	TamGiac tg;
	tg.Nhap();
	tg.Xuat();
	tg.Tinh_ChuVi_DienTich();
	return 0;
}

