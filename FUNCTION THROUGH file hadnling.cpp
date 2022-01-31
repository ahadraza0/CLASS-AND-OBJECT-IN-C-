#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void write()
{
	ofstream myfile;
	string username1;
	string password1;
	myfile.open("myfirstproject.txt");
	cout<<"enter your username:";
	cin>>username1;
	cout<<"enter your password:";
	cin>>password1;
	myfile<<"your username is:"<<username1<<endl;
	myfile<<"your password is:"<<password1<<endl;
	cout<<endl;
}
/*void read()
{
	string username,password;
	ifstream file;
	file.open("myfirstproject.txt");
	file>>username;
	cout<<endl;
	cout<<username<<endl;
	file>>password;
	cout<<endl;
	cout<<password<<endl;
}*/
void validate()
{
	int count;
	fstream file;
    string username,password,username_again,password_again;
    cout<<"enter your username again:";
    cin>>username_again;
    cout<<"enter your password again:";
    cin>>password_again;
    cout<<endl;
    cout<<"ENTER YOUR USERNAME AND PASSWORD AGAIN:"<<endl;
    cout<<"enter your username:";
	cin>>username;
	cout<<"enter your password:";
	cin>>password;
	char ch;
    do
    {
        if((username==username_again)&&(password==password_again))
        {
        	count=1;
            cout<<"congragulation you are successfully login"<<endl;
        }
        else
        cout<<"invalid login"<<endl;
        cout<<"are you want to try it again(Y/N):"<<ch<<endl;
        cin>>ch;
    }
    while(ch!='N');
}
int main()
{
	write();
	//read();
	validate();
}
