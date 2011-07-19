//What is the 10001st prime number?

#include<iostream>
using namespace std;

#include<math.h>
bool isPrime(unsigned long int);



int main()
{
unsigned long int MAX=2000000;
unsigned long int sum=0;
for (unsigned long int i=2; i<MAX; i++)
	{
	if (isPrime(i))
		{
//		cout<<i<<endl;
		sum +=i;
		}
	}
cout<<sum<<endl;
return 0;
}



bool isPrime(unsigned long int n)
{

if (n%2==0)
{
  if (n==2)
    return true;
  return false;
}

for(unsigned long int i=3; i<sqrt(n)+1 ; i=i+2)
	if (n%i==0)
		return false;

return true;

}
