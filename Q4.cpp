//Q4. Write a program to display Fibonacci Series upto nth term. (Using loops)
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,i,n,c=0;
	cout << "Enter the limit: ";
	cin >> n;
	cout << a << endl << b << endl;
	for(i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout << c << endl;
	}
}
