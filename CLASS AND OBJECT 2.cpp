#include<iostream>
#include<string>
using namespace std;
class user
{
	public:
		string name;
		string userid;
		string class_name;
};
int main()
{
	user data;
	cout<<"enter your name:";
	cin>>data.name;
	cout<<"enter your user id:";
	cin>>data.userid;
	cout<<"enter your class:";
	cin>>data.class_name;
	cout<<endl;
	cout<<"your class name is:"<<data.class_name<<endl;
	cout<<"your username is:"<<data.name<<endl;
	cout<<"your name is:"<<data.name<<endl;
	return 0;
}
