#include<iostream>
#include<string>
using namespace std;

class MyException
{
	public:
		MyException()
		{
			cout<<"a";
		}
};


int fun(int x,int y)
{  if(y!=0)
	return x/y;
	throw MyException();//constructor
}

int main()
{
	int a,x=21,y=0;
	try
	{
	
	a=fun(x,y);
	cout<<a;
     }
     catch(MyException e)
     {
     	cout<<"Division by zero";//aDivision by zero
     	
	 }
	 catch(...)
	 {
	 	cout<<"All catch";
	 }
}
