#include<iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool palindrome(unsigned long int x);

int main()
{

unsigned long int num=0, maxnum=0, a=0, b=0;
for(int i=999; i>0; i--)
	{
	 for (int j=i; j>0; j--)
		{
		 num=i*j;
		 if (palindrome(num))
			{
			if (maxnum<num)
				{
				maxnum=num;
				a=i;
				b=j;
				}	
			}	
		}
		
	}
cout<<a<<"x"<<b<<"=";
cout<<maxnum;
cout<<endl;
return 0;
}

bool palindrome(unsigned long int x)
{
    unsigned long int t = x, m = 0;
    do
    {
        m = m*10 + t%10;
    } while(t /= 10);

    return m == x;
}
