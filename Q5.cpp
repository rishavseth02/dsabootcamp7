//Q5. Write a program to check whether a number is Prime or Not.
#include<iostream>
using namespace std;
int main()
{
	int c=0,n,i;
	cout << "Enter a number: ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	cout << n << " is a prime number" << endl;
	else
	cout << n << " is a not prime number" << endl;
	return 0;
}
