#include<iostream>
#include<string.h>
using namespace std;

class Employee 
{
	public :
		int id;
		char name[50];
		int exp;
		char role[50];
		
		void OUT_value_1(int id,char name[],int exp,char role[])
		{
			cout<<"Employee Id-> "<<id<<endl
			<<"Employee Name-> "<<name<<endl
			<<"Employee Experience-> "<<exp<<endl
			<<"Employee Role-> "<<role<<endl;
		}
};
class Personal_Details
{
	public :
		char email[100];
		char contact_no[12];
		
		void OUT_value_2(char email[],char contact_no[])
		{
			cout<<"Enter Employee Email Id-> "<<email<<endl
			<<"Employee Contact No-> "<<contact_no<<endl;
		}
};
class Location : public Employee , public Personal_Details 
{
	public :
		char address[100];
		
		void display_value(char address[])
		{
			cout<<"Employee Address-> "<<address<<endl;
		}
};
int main()
{
	Location L;
	
	L.OUT_value_1(1,"Felix",5,"Software Engieneer");
	L.OUT_value_2("Felix7427@gmail.com","9825056105");
	L.display_value("Los Angeles,USA");
	return 0;
}
