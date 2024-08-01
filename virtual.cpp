#include<iostream>
using namespace std;
class Base
{
	public:
	
	         int a ,b;
			 
virtual void fun()
{
cout<<"Base fun"<<"\n";
}

virtual void gun()
{
cout<<"Base sun"<<"\n";
}

virtual void sun()
{
	cout<<"Base run"<<"\n";
}

};

class Derrived: public Base
{
	public:
	
	        int x , y;
			
void gun()      
{   
cout<<"Derived gun\n"; 
}
virtual void run()      
{
cout<<"Derived run\n"; 
}
void Add()
{   
cout<<"Derived add\n";
}

};

int main()
{
	cout<<"Size of Base :"<<sizeof(Base)<<"\n";
	cout<<"Size of Derrived :"<<sizeof(Derrived)<<"\n";
	
	Base*bp = new Derrived();
	bp -> fun();
	bp -> gun();
	bp -> sun();
	
	return 0;
}
			
	