#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
	public:
	
	    char name[20];
		int age;	
		char origin[20];
		char type[20];
		
	void set_value(char name[],int age,char origin[],char type[])
	{
		strcpy(this->name,name);
		       this->age= age;
		strcpy(this->origin,origin);
		strcpy(this->type,type);
	}
};
class Zebra : public Animal
{
	public:
		void out_value()
		{
			cout<<"The Zebra Name is     ="<<name<<endl;
			cout<<"This Zebra's Age is   ="<<age<<endl;
			cout<<"The Zebra's Origin is ="<<origin<<endl;
			cout<<"The Zebra is type of  ="<<type<<endl;
		}
};
class Dolphin : public Animal
{
	public:
		void out_value()
		{
			cout<<"The Dolphin Name is     ="<<name<<endl;
			cout<<"This Dolphin's Age is   ="<<age<<endl;
			cout<<"The Dolphin's Origin is ="<<origin<<endl;
			cout<<"The Dolphin is type of  ="<<type<<endl;
		}
};
int main()
{
	Zebra Z;
	Dolphin D;
	
	Z.set_value("Zimba",20,"South Africa","Land Animal");
	cout<<endl;
	D.set_value("Phinny",18,"Pecific Ocean","Aquatic Animal");
	
    Z.out_value();
	cout<<endl;
	D.out_value();
	    return 0;
}
