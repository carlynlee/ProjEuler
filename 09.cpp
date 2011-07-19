/*There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include<iostream>
using namespace std;
#include <math.h>

int findTrip();
double c=0;

int main()
{
cout<<findTrip()<<endl;
return 0;
}

int findTrip()
{
for(int a=1; a<1000; a++)
	for (int b=a+1; b<1000; b++)
		{
		c=sqrt(a*a+b*b);
		if (a+b+c==1000 && b<c)
			{
			cout<<a<<","<<b<<","<<c<<endl;
			return a*b*c;
			}
		}
return 0;
}

