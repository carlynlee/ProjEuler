#include<iostream>
using namespace std;
int main()
{
unsigned long int n;

cout<<"Enter the number upto which you want to print Fibonacci series";
cin>>n;
unsigned long int a=1, b=2, c=0, sum=0;
cout<<a<<","<<b<<",";
sum=2;
while(1)
{
c=a+b;
//continue only if next fib is less than n
if (c <= n)
   {
	if( c % 2 == 0)
	    sum=sum+c;
  	cout<<c<<", ";
	a=b;
	b=c;
    }
else break;
}
cout<<endl;
cout<<sum<<endl;
return 0;
}
