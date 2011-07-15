//Find the sum of all the multiples of 3 or 5 below 1000.
#include<iostream>
using namespace std;
int main ()
{
int a,b,i,iSum=0;
	for (i=1;i<1000;i++)
	{
       a = i%3;
       b = i%5;
		if(a==0||b==0)
		{
			iSum = iSum+i;
		}


	}
cout<<iSum<<endl;

return 0;
}
