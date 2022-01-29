#include<iostream>
using namespace std;
class car
{
	public:
		string brand;
		string model;
		int year;
};
int main()
{
	car carobj1;
	carobj1.brand="HONDA";
	carobj1.model="CIVIC RTX";
	carobj1.year=2022;	
	
	car carobj2;
	carobj2.brand="BMW";
	carobj2.model="RTX 360";
	carobj2.year=2022;
	
	cout<<"your first car information is "<<""<<carobj2.brand<<""<<"and"<<""<<carobj2.model<<""<<"and"<<""<<carobj2.year<<endl;
	cout<<endl;
	cout<<"your second car information is "<<""<<carobj1.brand<<""<<"and"<<""<<carobj1.model<<""<<"and"<<""<<carobj1.year<<endl;
	return 0;
}
