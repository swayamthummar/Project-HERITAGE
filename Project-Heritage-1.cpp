#include<iostream>
using namespace std;

class Mother
{
	public :
		void dispaly()
		{
			cout<<"Mother said->  'what do you want my child.'"<<endl;
		}
};
class Daughter : public Mother
{
	public :
		void display()
		{
			cout<<"Daughter said-> 'I want ice cream.'"<<endl;
		}
};
int main()
{
	Daughter d;

	d.dispaly();
	cout<<endl;
	d.display();
	return 0;	
}
