#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class data
{
	string write(string username,string password)
	{
		string username1;
		string password1;
		ofstream myfile;
		myfile.open("myfile.txt");
		cout<<"enter your username:";
		cin>>username1;
		cout<<"enter your password:";
		cin>>password1;
		myfile<<"your username :"<<username1<<endl;
		myfile<<"your password :"<<password1<<endl;
		return(username1,password1);
	}
};
int main()
{
	data myobj;
	myobj.write(string username,string password);
	return 0;
}
