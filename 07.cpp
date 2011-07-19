//What is the 10001st prime number?

#include<iostream>
using namespace std;

int main()
{
int SIZE=10001;
int primes[SIZE];
primes[0]=2;//first prime number
int count=1;
int i=3;
bool isPrime = true;


while(count<SIZE)
{
isPrime=true;
for(int j=count-1; j>=0; j--)
  {
   /*check against previous primes*/
   if(i%primes[j]==0)
    {isPrime=false; break;}
  }
if(isPrime)
{
primes[count]=i;
count++;
}
i++;
}


//for(int itr=0; itr<SIZE; itr++)
//cout<<primes[itr]<<", ";

cout<<"prime #"<<SIZE<<":" <<primes[SIZE-1]<<endl;
return 0;
}
