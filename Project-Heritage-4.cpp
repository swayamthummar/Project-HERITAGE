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
	
	void IN_value_1()
	{
		cout<<"Enter Employee Id-> ";
		cin>>id;
		cout<<"Enter Employee Name-> ";
		cin>>name;
		cout<<"Enter Employee Role-> ";
		cin>>role;
	}
};
class B : public A
{
	public :
		
	void IN_value_2()
	{
		cout<<"Enter Employee Salary-> ";
		cin>>salary;
		cout<<"Enter Employee Experience-> ";
		cin>>experience;
	}
};
class C : public B
{
	public :
		
	void display_value_1()
	{
		cout<<"Employee Name-> "<<name<<endl
		<<"Employee Role-> "<<role<<endl
		<<"Employee Salary-> "<<salary<<endl;
	}
	
	void display_value_2()
	{
		cout<<"Enter Employee Company Name-> ";
		cin>>comp_name;
		cout<<"Enter Employee Address-> ";
		cin>>address;
	}
};
class D : public C
{
	public :
		
	void display_value_3()
	{
		cout<<"Enter Employee Email Id-> ";
		cin>>email;
		cout<<"Enter Employee Contact No-> ";
		cin>>contact;
	    cout<<"---------------------------------------"<<endl<<endl;
	}
	void display_value_4()
	{
		cout<<"Employee Id-> "<<id<<endl;
		display_value_1();
		cout<<"Employee Experience-> "<<experience<<endl
		<<"Employee Company Name-> "<<comp_name<<endl
		<<"Employee Address-> "<<address<<endl
		<<"Employee Email-> "<<email<<endl
		<<"Employee Contact No-> "<<contact<<endl;	
	}
};
int main()
{
	D d;
	
	d.IN_value_1();
	d.IN_value_2();
	d.display_value_2();
	d.display_value_3();
	d.display_value_4();
	return 0;
}
