#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class ptsi
{
	public:
		double alpha;
		double beta;
		double sinAB;
		double cosAB;
		double sinAcosB;
		double cosAsinB;
};
class ptpi
{
	public:
		double alpha;
		double beta;
		double sin_sum;
		double sin_sub;
		double cos_sum;
		double cos_sub;
};
class mwf
{
	public:
	double a,b,c;
	double alpha,beta,gima;
	double mollweide;
};
int main()
{
	mwf data2;
	cout<<"enter the value of a:";
	cin>>data2.a;
	cout<<"enter the value of b:";
	cin>>data2.b;
	cout<<"enter the value of c:";
	cin>>data2.c;
	cout<<"enter the value of alpha, beta and gima:";
	cin>>data2.alpha>>data2.beta>>data2.gima;
	data2.mollweide=data2.a+data2.b/2.0;
	data2.mollweide=cos(1.0/2.0*(data2.alpha-data2.beta)/sin(1.0/2.0*data2.gima));
	cout<<"MOLLWEIDE'S FORMULA"<<endl;
	cout<<"MOLLWEIDE'S:"<<data2.mollweide<<endl;
	ptsi data;
	cout<<"enter the value of alpha is:";
	cin>>data.alpha;
	cout<<"enter the value of beta is:";
	cin>>data.beta;
	data.sinAB=1.0/2.0*(cos(data.alpha-data.beta)-cos(data.alpha+data.beta));
	data.cosAB=1.0/2.0*(cos(data.alpha-data.beta)+cos(data.alpha+data.beta));
	data.sinAcosB=1.0/2.0*(sin(data.alpha+data.beta)+sin(data.alpha-data.beta));
	data.cosAsinB=1.0/2.0*(sin(data.alpha+data.beta)-sin(data.alpha-data.beta));
	cout<<"PRODUCT TO SUM IDENTITIES"<<endl;
	cout<<"SIN(a).SIN(b)="<<data.sinAB<<endl;
	cout<<"COS(a).COS(b)="<<data.cosAB<<endl;
	cout<<"SIN(a).COS(b)="<<data.sinAcosB<<endl;
	cout<<"COS(a).SIN(b)="<<data.cosAsinB<<endl;
	cout<<endl;
	cout<<"PRODUCT TO PRODUCT INDENTITIES:"<<endl;
	ptpi data1;
	cout<<"enter the value of alpha is:";
	cin>>data1.alpha;
	cout<<"enter the value of beta is:";
	cin>>data1.beta;
	data1.sin_sum=2*(sin(data1.alpha+data1.beta/2.0)*cos(data1.alpha-data1.beta/2.0));
	data1.sin_sub=2*(cos(data1.alpha+data1.beta/2.0)*sin(data1.alpha-data1.beta/2.0));
	data1.cos_sum=2*(cos(data1.alpha+data1.beta/2.0)*cos(data1.alpha-data1.beta/2.0));
	data1.cos_sub=2*(sin(data1.alpha+data1.beta/2.0)*sin(data1.alpha-data1.beta/2.0));
	cout<<"SUM TO PRODUCT IDENTITIES"<<endl;
	cout<<"SIN(A)+SIN(B):"<<data1.sin_sum<<endl;
	cout<<"SIN(A)-SIN(B):"<<data1.sin_sub<<endl;
	cout<<"COS(A)+COS(B):"<<data1.cos_sum<<endl;
	cout<<"COS(A)-COS(B):"<<data1.cos_sub<<endl;
	return 0;
}
