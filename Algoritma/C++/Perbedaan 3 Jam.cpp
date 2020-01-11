#include<iostream>
#include<stdio.h>
using namespace std;

struct jam{
	int j,m,d ;
};
int main (){
	int s;
	jam jam1;
	cout<<"Masukan jam1 = ";cin>>jam1.j;
	cout<<"Masukan menit1 = ";cin>>jam1.m;
	cout<<"Masukan detik1 = ";cin>>jam1.d;
	
	jam jam2;
	cout<<"Masukan jam2 = ";cin>>jam2.j;
	cout<<"Masukan menit2 = ";cin>>jam2.m;
	cout<<"Masukan detik2 = ";cin>>jam2.d;
	cout<<"Hasil Selisih = "; s=jam1.j+jam2.j;
	cout<<s<<endl;
	
return 0;

}
