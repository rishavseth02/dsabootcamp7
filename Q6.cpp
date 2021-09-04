//Q6. Print this pattern using loops
//For n=5
//	    *
//	   * *
//	  * * *
//	 * * * *
//	* * * * *
#include<iostream>
using namespace std;
int main()
{
    int n=5;

    for(int row = 1, k = 0; row <= n; ++row, k = 0)
    {
        for(int stars = 1; stars <= n-row; ++stars)
        {
            cout <<"  ";
        }

        while(k!= 2*row-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
