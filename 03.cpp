#include<iostream>
using namespace std;
int main()
{

unsigned long int number = 18; //600851475143;
	int divisor = 2;
	while (number > 1) {
		if (0 == (number % divisor)) {
			number /= divisor;
			divisor--;
		}
		divisor++;


	}
cout<<divisor<<endl;
return 0;
}
