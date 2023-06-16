#include<iostream>
#include<string.h>

using namespace std;

class A
{
	public :
		
	int id;
	char name[50];
	char role[50];
	int salary;
	char experience[20];
	char comp_name[20];
	char address[50];
	char email[50];
	char contact[12];
	
	void set_value()
	{
		cout<<"Enter Employee Id=";
		cin>>id;
		cout<<"Enter Employee Name=";
		cin>>name;
		cout<<"Enter Employee Role=";
		cin>>role;
	}
};

class B : public A
{
	public :
		
	void get_value()
	{
		cout<<"Enter Employee Salary=";
		cin>>salary;
		cout<<"Enter Employee Experience=";
		cin>>experience;
	}
};

class C : public B
{
	public :
		
	void display_value()
	{
		cout<<"Employee Name="<<name<<endl<<"Employee Role="<<role<<endl<<"Employee Salary="<<salary<<endl;
	}
	
	void show_value()
	{
		cout<<"Enter Employee Company Name=";
		cin>>comp_name;
		cout<<"Enter Employee Address=";
		cin>>address;
	}
};

class D : public C
{
	public :
		
	void info_value()
	{
		cout<<"Enter Employee Email Id=";
		cin>>email;
		cout<<"Enter Employee Contact No.=";
		cin>>contact;
	    cout<<"---------------------------------------"<<endl<<endl;
	}
	void information ()
	{
		cout<<"Employee Id="<<id<<endl;
		display_value();
		cout<<"Employee Experience="<<experience<<endl
		<<"Employee Company Name="<<comp_name<<endl
		<<"Employee Address="<<address<<endl
		<<"Employee Email="<<email<<endl
		<<"Employee Contact No="<<contact<<endl;	
	}
};
main()
{
	D d;
	
	d.set_value();
	d.get_value();
	d.show_value();
	d.info_value();
	d.information();
}
