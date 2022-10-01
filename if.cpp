#include <iostream>

using namespace std;

int main(void)
{
int num1,num2,op;
double result;
bool x=false,y=false;

while (x==false)
	{
	cout<<"Enter num1 and num2 (positive only):\t"<<endl;
	cin>>num1>>num2;
	if (num1>=0 && num2>=0)
		x=true;
	}
	
while (y==false)
	{
	cout<<"Enter Operator:\n 1- plus \n 2-minus \n 3-multiply \n 4-divide"<<endl;
	cin >>op;
	if(op==1 || op==2 || op==3 || op==4)
		y=true;
	}

if (op==1)
	result=num1+num2;
else if (op==2)
	result=num1-num2;
else if (op==3)
	result=num1*num2;
else
	result=(static_cast<double>(num1))/num2;

cout<<"The result is:\t"<<result<<endl;
	
}
