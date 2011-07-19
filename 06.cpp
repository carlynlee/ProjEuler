//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int sum_of_squares=0;
int square_of_sum=0;
int sum=0;

for (int i=1; i<=100; i++)
sum_of_squares+=(i*i);

for (int i=1; i<=100; i++)
	sum+=i;
square_of_sum=sum*sum;

cout<<"diff: "<< abs(square_of_sum-sum_of_squares)<<endl;
return 0;
}
